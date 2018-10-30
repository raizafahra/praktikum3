#include<iostream>
using namespace std;

int main() {
   int i=0;
   int max=0;
   int n,a;

   cout << "masukan jumlah bilangan: ";
   cin >> n;

   for (i;i<n;i++) {
    cout << "masukan bilangan ke-" << i+1 << " : ";
    cin >> a;

        if (a > max)
        max = a;
   }
    cout << "bilangan terbesar adalah: " << max << endl;

}
