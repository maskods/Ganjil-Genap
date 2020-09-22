#include <iostream>
using namespace std;

int main() {
	int n;
	
	cout << "===+ Menampilkan Bilangan Ganjil +===" << endl << endl;
	
	cout << "Tampilkan bilangan ganjil 1 sampai ";
	cin >> n;
	
	for(int i=1; i<=n; i++) {
		if(i % 2 != 0) {
			cout << i << " ";
		}
	}
	
	return 0;
}
