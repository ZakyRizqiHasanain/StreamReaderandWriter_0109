#include <iostream>
using namespace std;

int main() {
    try {
        cout << "Selamat belajar di prodi TI UMY" << endl;
        throw 0.5; //melemparkan sebuah integer maka
        cout << "Pernyataan tidak akan dieksekusi" << endl;
    }
    catch (int a) {
        //blok ini akan dieksekusi
        cout << "Pengecualian akan dieksekusi" << endl;
    }
    catch (...) {
        /*jiika selain integer maka blok ini akan dieksekusi*/
        cout << "default pengecualian dieksekusi" << endl;
    }
    return 0;
}