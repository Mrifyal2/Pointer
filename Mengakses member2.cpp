#include <iostream>
using namespace std;

class siswa{
	public:
	int NoInduk;
	void showInduk() {
		cout<<"No Induk = " <<NoInduk<<endl; 
	}
};

int main() {
	siswa *budi =new siswa{1};
	budi->NoInduk = 2;
	budi->showInduk();
	delete budi;
	return 0; }

