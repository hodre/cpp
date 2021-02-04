/*
Varga Sebestyén
2021. 02. 04.
fibonacci sorozat n-edik tagja rekurzívan 
*/


#include <iostream>
using namespace std;

int fibonacci(int n);

int main()
{
    int n;
    int f[100];
    cout << "hanyadik fibonacci szam erdekel" << endl;
    cin >> n;
    cout << "az "<< n << ". fibonacci szam:" << fibonacci(n) << endl;
    return 0;
}

int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 2) + fibonacci(n - 1); //rekurzió
}

