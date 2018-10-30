#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout<<"bilangan ke-1: ";
    cin>> a;
    cout<<"bilangan ke-2: ";
    cin>> b;
    cout<<"bilangan ke-3: ";
    cin>> c;
    if (a==b)
    {
        if (a==c)
            cout << "Segitiga Sama Sisi";
        else
            cout << "Segitiga Sama Kaki";
    }else{
        if (a==c)
            cout << "Segitiga Sama Kaki";
        else
    {
        if (b==c)
            cout << "Segitiga Sama Kaki";
        else
            cout << "segitiga Sembarang";
    }
    }
}
