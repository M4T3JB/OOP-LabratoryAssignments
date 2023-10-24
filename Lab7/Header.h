#pragma warning(disable : 4996)
using namespace std;

class X {
public:
    string err;
    X(const char* s) : err(s) {}
};

class Y {
public:
    string err;
    Y(const char* s) : err(s) {}
};

class Z {
public:
    string err;
    Z(const char* s) : err(s) {}
};

int number_input()
{
    int x;
    cout << "Enter a Number!" << endl;
    cin >> x;
    while (1)
    {
        if (cin.fail())
            throw X("Input is not a number!");
       
        if (!cin.fail())
            break;
    }
    return x;
}
char operator_input()
{
	char z;
	cout << "Enter an operator! " << endl;
	cin >> z;
    while (1)
    {
        if ((z == '/') || (z == '+') || (z == '-') || (z == '*'))
            break;
        else
            throw Y("Not a valid operator");

    }
	
	return z;
}
int results(int broj1, int broj2, char znak)
{
    int c, n = 0;
    if (znak == '/')
    {
        if (broj2 == 0)
            throw Z("Dividing by 0");
        c = broj1 / broj2;
        cout << "Dividing " << c << endl;

    }
    if (znak == '*')
    {
      
        c = broj1 * broj2;
        cout << "Multiplying " << c << endl;

    }
    if (znak == '-')
    {
      
        c = broj1 - broj2;
        cout << "Subtracting " << c << endl;

    }
    if (znak == '+')
    {
        c = broj1 + broj2;
        cout << "Adding " << c << endl;

    }
}