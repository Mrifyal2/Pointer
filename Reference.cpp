#include <iostream>
using namespace std;

int main() {
	string a = "aku"; //memberikan 5 pada variabel a
	string *b; //mendeklarasikan variabel b sebagai pointer
	b= & a; //mengkopy alamat variabel a kedalam variabel pointer b
	cout << "Nilai Variabel a adalah "<<a<<endl;
	cout << "Alamat variabel a adalah "<<&a<<endl;
	cout << "Isi dari variabel b adalah "<<b<<endl;
	cout << "nilai yang tertampung dalam variabel b adalah " <<*b<< endl;
	return 0;
}
