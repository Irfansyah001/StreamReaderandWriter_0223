#include <iostream>
using namespace std;

int main()
{
    try {
        cout << "Selamat belajar di prodi TI UMY" << endl;
        throw 0.5; //melemparkan sebuah int maka
        cout << "Pernyataan tidak akan dieksekusi" << endl;

    }
