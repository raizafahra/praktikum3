## Latihan1: Menampilkan Bilangan Terbesar dari Sejumlah Bilangan

**Alur algoritma**
1. Mendeklarasikan variable int i=0 int max=0 dari int n, a
2. Membaca input cin >> n
3. Membaca input cin >> a lalu mambandingkan a > max proses akan diulang selama kondisi i<n benar
4. Cetak max

**flowchart program**
https://github.com/raizafahra/praktikum3/blob/master/latihan1/flowchart1.jpg

**pict program**
https://github.com/raizafahra/praktikum3/blob/master/latihan1/hasil1.png

**Kode lengkap program**
```
#include<iostream>
using namespace std;

int main(){
    int i=0;
    int max=0;
    int n,a;

    cout << "masukan jumlah bilangan: ";
    cin >> n;

    for (i;i<n;i++){
        cout << "masukan bilangan ke-" << i+1 << ": ";
        cin >> a;

        if (a > max)
            max = a;

    }

    cout << "bilangan terbesar adalah: " << max << endl;


}
```

## Latihan2 : Mengurutkan bilangan dari yang terkecil ke yang terbesar

**Alur algoritma**
1. Mendeklarasi variable int A,B,C sebagai variable input
2. Membaca input cin >> A >> B >> C
3. Membandingkan nilai variable A dengan variable B jika A lebih kecil dari pada B
4. Membandingkan kembali variable A dengan variable C 
5. Jika kondisi *True* maka cetaklah bilangan secara berurutan dari yang terkecil-terbesar yaitu A,B,C
6. Jika kondisi *False* bandingkan kembali variable A dengan variable C jika A lebih kecil dari C
7. Jika kondisi *True* maka cetaklah bilangan secara berurutan dari yang terkecil-terbesar yaitu A,C,B
8. Jika kondisi *False* maka cetaklah bilangan secara berurutan dari yang terkecil-terbesar yaitu C,A,B
9. Kemudian jika A lebih kecil dari C
10. Jika kondisi *True* maka cetaklah bilangan secara berurutan dari yang terkecil-terbesar yaitu B,A,C
11. Jika kondisi *False* bandingkan kembali variable B dengan variable C jika B lebih kecil dari C
12. Jika kondisi *True* maka cetaklah bilangan secara berurutan dari yang terkecil-terbesar yaitu B,A,C
13. Jika kondisi *False* maka cetaklah bilangan secara berurutan dari yang terkecil-terbesar yaitu C,B,A

**Flowchart program**
https://github.com/raizafahra/praktikum3/blob/master/latihan2/flowchart2.png

**pict program**
https://github.com/raizafahra/praktikum3/blob/master/latihan2/hasill2.png

**Kode lengkap program**
```
#include<iostream>
using namespace std;

int main(){

    int a,b,c;

    cout << "masukan bilangan 1: ";
    cin >> a;
    cout << "masukan bilangan 2: ";
    cin >> b;
    cout << "masukan bilangan 3: ";
    cin >> c;

    if (a < b)
        if (b < c)
        cout << "urutkan bilangan: " << a << "," << b << "," << c << endl;
    else
    {   if (a < c)
        cout << "urutkan bilangan: " << a << "," << c << "," << b << endl;
        else
            cout << "urutkan bilangan: " << c << "," << a << "," << b << endl;
    }

    else {
        if (a < c)
            cout << "urutan bilangan: " << b << "," << a << "," << c << endl;
        else {
            if (b < c)
            cout << "urutan bilangan: " << b << "," << c << "," << a << endl;
            else
            cout << "urutan bilangan: " << c << "," << b << "," << a << endl;

        }
    }
}
```

## Latihan3 : Menentukan jenis segitiga dari panjang sisi-sisinya

**Alur algoritma**
1. Mendeklarasikan variabel `int a, b, c`
2. Input nilai untuk variabel `cin >> a >> b >> c`
3. Jika nilai `a` sama dengan nilai `b` dan `c` maka tampilan segitiga sama sisi
4. Jika nilai `a` sama dengan nilai `b` atau nilai `a` sama dengan nilai `c` maka tampilan segitiga sama kaki
5. Selain itu tampilan segitiga sembarang

**flowchart program**
https://github.com/raizafahra/praktikum3/blob/master/latihan3/flowchart3.png

**pict program**
https://github.com/raizafahra/praktikum3/blob/master/latihan3/flowchart3.png

**kode lengkap program**
```
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
```