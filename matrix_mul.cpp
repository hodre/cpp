/*
Varga Sebestyén
2021. 02. 06.
matrix szorzas
*/

#include <iostream>
using namespace std;

int main()
{
	int a[10][10], b[10][10], c[10][10];
	int s, o;
	cout << "add meg a sorok es az oszlopok szamat" << endl;
	cin >> s >> o;
	cout << "add meg az elso matrixot" << endl;
	for (int i = 0; i < s; i++)
	{
		for (int j = 0; j < o; j++)
		{
			cin >> a[i][j];
		}
	}
	cout << "add meg a masodik matrixot" << endl;
	for (int i = 0; i < s; i++)
	{
		for (int j = 0; j < o; j++)
		{
			cin >> b[i][j];
		}
	}
	for (int i = 0; i < s; i++)
	{
		for (int j = 0; j < o; j++)
		{
			c[i][j] = 0;
			for (int k = 0; k < o; k++)
			{
				c[i][j] += a[i][k] * b[k][j];

			}
		}
	}

	cout << "megoldas" << endl;
	for (int i = 0; i < s; i++)
	{
		for (int j = 0; j < o; j++)
		{
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}

