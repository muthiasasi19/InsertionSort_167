#include <iostream>
using namespace std;

int arr[20];							// Membuat Array dengan panjang data 20
int n;								   //  Membuat variable inputan n

void input() {						//	Procedure Input 
	while (true)
	{
		cout << "Masukkan Jumlah Data pada Array : "; // Membuat inputan jumlah element Array 
		cin >> n;										// Memanggil variable inputan n 

		if (n <= 20) {									// Membuat kondisi n tidak boleh lebih dari 20
			break;
		}
		else
		{
			cout << "\nArray yang anda masukkan maksimal 20 Element.\n"; // Menampilkan Pesan jika data lebih dari 20 
		}
	}
