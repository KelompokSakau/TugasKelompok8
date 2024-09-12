#include <iostream>

using namespace std;

int i, n, t, e;

int main()
{
    cout << "Masukkan jumlah bilangan: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << "Masukkan nomor ke-" << i << " : ";
        cin >> t;
        if (t%2 == 0) {
            e += t;
        }
    }

    cout << "\nJumlah bilangan genap: " << e;
    return 0;
}
