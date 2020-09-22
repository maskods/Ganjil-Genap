#include <iostream>
using namespace std;

int main() {
	int n;
	
	cout << "===+ Menampilkan Bilangan Genap +===" << endl << endl;
	
	cout << "Tampilkan bilangan genap 1 sampai ";
	cin >> n;
	
	for(int i=1; i<=n; i++) {
		if(i % 2 == 0) {
			cout << i << " ";
		}
	}
	
	return 0;
}
