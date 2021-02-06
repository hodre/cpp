/*
Varga Sebestyen
2021. 02. 06.
matrixok szorzasa fajlkezelessel
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int a[10][10],b[10][10],c[10][10];
	int sa, oa, sb, ob, sc, oc, sx, ox;

	//fajlok megnyitasa
	ifstream f("matrix_2a.txt");
	ifstream f2("matrix_2b.txt");

	//a matrix beolvasasa
	f >> sa >> oa;
	for (int i = 0; i < sa; i++)
	{
		for (int j = 0; j < oa; j++)
		{
			f >> a[i][j];
		}
	}
	f.close();

	//a matrix kiirasa
	for (int i = 0; i < sa; i++)
	{
		for (int j = 0; j < oa; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	//b matrix beolvasasa
	f2 >> sb >> ob;
	for (int i = 0; i < sb; i++)
	{
		for (int j = 0; j < ob; j++)
		{
			f2 >> b[i][j];
		}
	}
	f2.close();

	//b matrix kiirasa
	for (int i = 0; i < sb; i++)
	{
		for (int j = 0; j < ob; j++)
		{
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	//hibakezeles
	if (oa != sb)
	{
		cerr << "dimenziok nem kompatibilesek a szorzashoz" << endl;
			return 0;
	}

	sc = sa;
	oc = ob;

	//dimenziok a szorzashoz
	if (sa >= sb)
	{
		sx = sa;
	}
	else
	{
		sx = sb;
	}
	if (oa >= ob) 
	{
		ox = oa;
	}
	else
	{
		ox = ob;
	}

	//matrix szorzas
	for (int i = 0; i < sx; i++)
	{
		for (int j = 0; j < ox; j++)
		{
			c[i][j] = 0;
			for (int k = 0; k < sx; k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}

	//megoldas nyomtatasa a konzolra
	for (int i = 0; i < sc; i++)
	{
		for (int j = 0; j < oc; j++)
		{
			cout << c[i][j] << " ";
		}
		cout << endl;
	}

	//fajlba iras
	ofstream f3("matrix_mo.txt");
	for (int i = 0; i < sc; i++)
	{
		for (int j = 0; j < oc; j++) 
		{
			f3 << c[i][j] << " ";
		}
		f3 << endl;
	}
	f3.close();
	return 0;
}