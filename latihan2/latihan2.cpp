#include<iostream>
using namespace std;

int main(){

    int a, b, c;

    cout << "masukan bilangan 1: ";
    cin >> a;
    cout << "masukan bilangan 2: ";
    cin >> b;
    cout << "masukan bilangan 3: ";
    cin >> c;

    if (a < b){
        if(b < c)
            cout << "urutan bilangan: " << a << ", " << b << ", " << c << endl;
        else {
            if(a < c)
                cout << "urutan bilangan: " << a << ", " << c << ", " << b << endl;
            else
                cout << "urutan bilangan: " << c << ", " << a << ", " << b << endl;
    }

    }    else {
            if (a < c)
                cout << "urutan bilangan: " << b << ", " << a << ", " << c << endl;
            else {
                if (b < c)
                    cout << "urutan bilangan: " << b << ", " << c << ", " << a << endl;
                else
                    cout << "urutan bilangan: " << c << ", " << b << ", " << a << endl;
            }
        }

}

