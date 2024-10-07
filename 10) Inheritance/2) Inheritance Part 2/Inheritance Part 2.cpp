#include <iostream>

using namespace std;

class clsMother 
{
public:
	clsMother()
	{
		cout << "Mother: Empty constructor" << endl;
	}

	clsMother(int a)
	{
		cout << "Mother: Parameterized Constructor " << a << endl;
	}
	
};

class clsDaughter : public clsMother
{
public:
	clsDaughter ()
	{
		cout << "Daughter: Empty Constructor" << endl;
	}

	clsDaughter (int a)
	{
		cout << "Daughter: parameterized constructor value: " << a << endl;
	}
};

class clsSon : public clsMother 
{
public:
	clsSon()
	{
		cout << "Son: Empty constructor" << endl;
	}

	clsSon(int Mother) : clsMother(Mother)
	{
		cout << "Son: Empty Constructor" << endl;
	}

	clsSon(int Son, int Mother) : clsMother(Mother)
	{
		cout << "Son: Parameterized constructor " << Son << endl;
	}
};

int main ()
{
	clsMother sara1;
	cout << "____________________________" << endl;
	clsMother sara2(10);
	cout << "____________________________" << endl;
	clsDaughter sara3;
	cout << "____________________________" << endl;
	clsDaughter sara4(10);
	cout << "____________________________" << endl;
	clsSon sara5;
	cout << "____________________________" << endl;
	clsSon sara6(10);
	cout << "____________________________" << endl;
	clsSon sara7(10, 4);
}