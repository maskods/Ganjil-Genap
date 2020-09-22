#include <iostream>
using namespace std;

int main() {
	int n;
	
	cout << "===+ Cek Bilangan Ganjil atau Genap +===" << endl << endl;
	
	cout << "Masukkan Angka : ";
	cin >> n;
	

	if(n == 0) {
		cout << n;
	}else if(n % 2 != 0) {
		cout << n << " adalah bilangan ganjil";
	} else if (n % 2 == 0){
		cout << n << " adalah bilangan genap";
	} else {
		cout << "ERROR";
	}
	
	return 0;
}
