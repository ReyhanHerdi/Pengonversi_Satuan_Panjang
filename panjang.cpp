#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Program Pengonversi Satuan Panjang" << endl ;

	cout << endl; 

	float angka, hasil, n;
	int x1, x2, z, y;
	char kp ;
	string satuan[7] = {"km", "hm", "dam", "m", "dm", "cm", "mm" };

	do
	{
			cout << "Masukkan angka: " ;
	cin >> angka ;

	cout << "Masukkan satuan awal: " ;
	cin >> x1 ;

	cout << "Masukkan satuan akhir: " ;
	cin >> x2 ;

	z = x2 - x1 ;
	y = x1 - x2 ;	

	if (x1 < x2)
	{
		n = 1;
		for (int i = 0; i < z ; i++)
		{
			n *= 10 ; 
		}

		cout << n << endl ;
	}
	else if (x1 > x2)
	{
		n = 1;
		for (int i = 0; i < y ; i++)
		{
			n /= 10 ; 
		}
	}
	else
	{
		n = 1;
	}

	hasil = angka * n ;

	cout << angka << " " << satuan[x1] << " = " << hasil << " " << satuan[x2] << endl;

	cout << endl ;

	cout << "Lanjut? " ;
	cin >> kp ;

	cout << endl ;

	} while (kp == 'y');

	return 0;
}
