/*
Varga Sebestyen
2021.02.07.
my first object oriented program
*/

#include <iostream>
#include <string>
using namespace std;

class Kutya {
	//attributumok
	string nev;
	int kor = 0;
	int ugyesseg=100;
	bool baratsagos_e=true;

	//konstruktorok
public:
	Kutya(string n, int k, int u, bool b) {
		nev = n;
		kor = k;
		ugyesseg = u;
		baratsagos_e = b;
	}
	Kutya(string n) :nev(n), kor(1), ugyesseg(101), baratsagos_e(false) {}
	//getterek
	string get_nev() { return nev; }
	int get_kor() { return kor; }
	int get_ugyesseg() { return ugyesseg; }
	bool get_baratsagos_e() { return baratsagos_e; }
	//setterek
	void set_nev(string ujnev) { nev = ujnev; }
	void set_kor(int ujkor) { kor = ujkor; }
	void set_ugyesseg(int ujugyesseg) { ugyesseg = ujugyesseg; }
	void set_baratsagos_e(bool ujbaratsagos_e) { baratsagos_e = ujbaratsagos_e; }
};

int main()
{
	Kutya k1("Luna", 4, 125, true);
	Kutya k2("Fuge");

	cout << k1.get_nev() << " " << k1.get_kor() << " " << k1.get_ugyesseg() << " " << k1.get_baratsagos_e() << endl;
	cout <<k2.get_nev() << " " << k2.get_kor() << " " << k2.get_ugyesseg() << " " << k2.get_baratsagos_e() << endl;
	k2.set_kor(8);
	cout << k2.get_nev() << " " << k2.get_kor() << " " << k2.get_ugyesseg() << " " << k2.get_baratsagos_e() << endl;
	return 0;
}

