/*
Varga Sebestyén
2021. 02. 06.
matrix iras fajlba
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int a[10][10];
	int n, m; //sor, oszlop

	cout << "add meg a sorok es az oszlopok szamat" << endl;
	cin >> n >> m;
	// matrix elemeinek beolvasasa a konzolrol
	cout << "add meg a matrixot" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}
	//elemek irasa a fajlba
	ofstream f("matrix.txt");
	f << n << " " << m << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			f << a[i][j] << " ";
		}
		f << "\n";
	}
	f.close();

	return 0;
}

