#include <iostream>
using namespace std;

class CPU
{
public:
	virtual void calculate() = 0;
};

class GPU
{
public:
	virtual void display() = 0;
};

class Memory
{
public:
	virtual void save() = 0;
};

class Computer
{
public:
	Computer(CPU* cpu,GPU *gpu,Memory *memory )
	{
		this->cpu = cpu;
		this->gpu = gpu;
		this->memory = memory;
	}

	void doWork()
	{
		cpu->calculate();
		gpu->display();
		memory->save();
	}

	~Computer()
	{
		if (cpu != NULL)
		{
			delete cpu;
			cpu = NULL;
		}

		if (gpu != NULL)
		{
			delete gpu;
			gpu = NULL;
		}

		if (memory != NULL)
		{
			delete memory;
			memory = NULL;
		}
	}

private:
	CPU* cpu;
	GPU* gpu;
	Memory* memory;
};

class IntelCPU:public CPU
{
public:
	void calculate()
	{
		cout << "Intel的CPU开始计算" << endl;
	}
};

class IntelGPU :public GPU
{
public:
	void display()
	{
		cout << "Intel的GPU开始显示" << endl;
	}
};

class IntelMemory :public Memory
{
public:
	void save()
	{
		cout << "Intel的Memory开始存储" << endl;
	}
};

class LenovoCPU :public CPU
{
public:
	void calculate()
	{
		cout << "Lenovo的CPU开始计算" << endl;
	}
};

class LenovoGPU :public GPU
{
public:
	void display()
	{
		cout << "Lenovo的GPU开始显示" << endl;
	}
};

class LenovoMemory :public Memory
{
public:
	void save()
	{
		cout << "Lenovo的Memory开始存储" << endl;
	}
};

void test01()
{
	CPU* cpu1 = new IntelCPU;
	GPU* gpu1 = new IntelGPU;
	Memory* memory1 = new IntelMemory;
	Computer *computerIntel = new Computer(cpu1, gpu1, memory1);
	computerIntel->doWork();
	delete computerIntel;
	computerIntel = NULL;

	cout << "-----------------------" << endl;
		
	CPU* cpu2 = new LenovoCPU;
	GPU* gpu2 = new LenovoGPU;
	Memory* memory2 = new LenovoMemory;
	Computer* computerLenovo = new Computer(cpu2, gpu2, memory2);
	computerLenovo->doWork();
	delete computerLenovo;
	computerLenovo = NULL;
}

int main()
{
	test01();
	return 0;
}