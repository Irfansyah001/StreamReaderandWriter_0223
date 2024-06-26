#include <exception>
//untuk obyek exception yg akan digunakan
#include <iostream>
#include <array>
// untuk objek array yg akan digunakan
using namespace std;

int main()
{
    cout << "awal program" << endl; // penanda 1
    try {
        array<int, 3> data = { 3, 5, 7 };
        //pesan array int 3 element
        cout << data.at(5) << endl;
        //memanggil array elemen ke 5
    }
    catch (exception& e) {
        //penangkap menggunakan obyek exception
        cout << e.what() << endl;
        /*akan di eksekusi karena array data hanya memiliki 3 elemen*/
    }
    cout << "Baris Program Yang Terakhir" << endl;
    /*penanda 2: bahwa program berjalan tanpa berhenti meskipun terjadi kesalahan*/
        return 0;
}