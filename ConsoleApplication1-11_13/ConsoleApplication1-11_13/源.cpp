#define _CRT_SECURE_NO_WARNINGS 1
#if 0
class Base
{
public:
	void SetBase(int b)
	{
		_b = b;
	}

	void TestFunc(int)
	{}

	void PrintBase()
	{
		cout << _b << endl;
	}

	int _b;
};


struct Derived : public Base
{
public:
	void SetDerived(int b, int d)
	{
		_b = b;
	}

	void TestFunc()
	{}

	char _b;
};

int main()
{
	cout << sizeof(Derived) << endl;

	Derived d;
	d._b = 1;
	d.Base::_b = 2;

	d.Base::TestFunc(10);
	return 0;
}
#endif

// 

// 如果基类没有定义构造函数 或者 基类具有默认的构造函数（无参和全缺省的构造函数）
// 1. 派生类可以不用定义
// 2. 如果派生类需要做其他事情，将自己的构造函数显式给出
class Base
{
public:
	Base(int b = 10)
		: _b(b)
	{}

	void SetBase(int b)
	{
		_b = b;
	}

	void TestFunc(int)
	{}

	void PrintBase()
	{
		cout << _b << endl;
	}

	int _b;
};


struct Derived : public Base
{
public:
	// 编译器给派生类生成的默认构造函数
	//Derived()
	//	: Base()
	//{}

	void SetDerived(int b, int d)
	{
		_b = b;
		_d = d;
	}

	void TestFunc()
	{}

	char _d;
};
