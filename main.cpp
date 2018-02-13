#include <iostream>

using namespace std;

int CsereOsszeadassal(int &a, int &b);
int CsereSzorzassal(int &a, int &b);
int CsereExor(int &a, int &b);

int main()
{
    int a = 100;
    int b = 50;
    cout << "a: " << a << endl << "b: " << b <<endl;

    CsereOsszeadassal(a, b);
    cout << "Csere\n";
    cout << "a: " << a << endl << "b: " << b <<endl;

    CsereSzorzassal(a,b);
    cout << "Csere\n";
    cout << "a: " << a << endl << "b: " << b <<endl;
    
    CsereExor(a, b);
    cout << "Csere\n";
    cout << "a: " << a << endl << "b: " << b <<endl;
    return 0;
}


int CsereOsszeadassal(int &a, int &b)
{
    a = b + a;
    b = a - b;
    a = a - b;
}

int CsereSzorzassal(int &a, int &b)
{
    a = b * a;
    b = a / b;
    a = a / b;
}

int CsereExor(int &a, int &b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}
