#include <iostream>
using namespace std;

int i, n, t;

int main (){
cout << "Masukkan angka awal: ";
cin >> n;

cout << "Masukkan angka akhir: ";
cin >> i;

for (i; i>=n; i--){
        if (i%2 != 0){
            cout << i << " ";
            t += i;
        }
    }
    cout << "\nJumlah: " << t << endl;
    return 0;
}

