#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
public:
	static int nim;
	int id;
	string nama;

	void SetID();
	void printAll();
	mahasiswa(string pnama)
};
