#include <iostream>
#include <string>

using namespace std;

/* 
	g++ panjang.cpp -o
*/


// kalau satuannya turun
float turun(int z){
	float n = 1;

	for (int i = 0; i < z ; i++)
	{
		n *= 10 ; 
	}

	return n;
}

//kalau satuannya naik
float naik(int y){
	float n = 1;

	for (int i = 0; i < y ; i++)
	{
		n /= 10 ; 
	}

	return n;
}

void konversi(){
	float angka, hasil, n, up, down;
	int r, x1, x2, z, y;
	char kp ;
	string satuan[7] = {"km", "hm", "dam", "m", "dm", "cm", "mm" };

	for (int r = 0; r < 7; r++)
	{
		cout << satuan[r] << "  =  " << r << endl;
	}

	cout << endl; 

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
			down = turun(z);
			hasil = angka * down ;
		}
		else if (x1 > x2)
		{
			up = naik(y);
			hasil = angka * up ;
		}
		else 
		{
			n = 1;
			hasil = angka * n ;
		}
		
		cout << angka << " " << satuan[x1] << " = " << hasil << " " << satuan[x2] << endl;

		cout << endl ;

		cout << "Lanjut? " ;
		cin >> kp ;

		cout << endl ;

	} while (kp == 'y' || kp == 'Y');
}

int main()
{
	cout << "Program Pengonversi Satuan Panjang" << endl ;

	cout << endl; 

	konversi();

	cout << "Program Selesai" << endl;

	return 0;
}
