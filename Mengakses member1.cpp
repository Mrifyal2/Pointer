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
	siswa budi {1}; //Object budi
	budi.showInduk(); //Member Access Operator
	
	siswa &refBudi = budi; //Pointer Reference refBudi
	refBudi.NoInduk = 2; //Member Access Operator
	budi.showInduk();
	
	siswa *pBudi =&budi; //Pointer Deference pBudi
	pBudi->NoInduk = 3; //Arrow Operator
	budi.showInduk(); 
	return 0; }

