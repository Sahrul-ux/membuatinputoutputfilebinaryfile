#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Mahasiswa{
	int NIM;
	string nama;
	string jurusan;
};

int main(){
	fstream myFile;
	Mahasiswa dataBaca;
	myFile.open("data.bin", ios::in | ios::binary );
	
	myFile.read(reinterpret_cast<char*>(&dataBaca),sizeof(Mahasiswa));
	
	cout << dataBaca.NIM << endl;
	cout << dataBaca.nama << endl;
	cout << dataBaca.jurusan << endl;	
	
	cin.get();
	return 0;
}
