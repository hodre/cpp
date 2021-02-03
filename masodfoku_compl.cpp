/*
Varga Sebestyén
2021.02.03.
másodfokú egyenletmegoldás kiterjesztve a komplex számok halmazára 
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    double x1, x2;
    double D; //diszkrimináns
    double Re, Im;
    
    cout << "Adja meg a másodfokú egyenlet 3 együtthatóját!\n";
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    
    D = (b*b-4*a*c);
    
    if(D < 0)
    {
        Re = -b/(2*a);
        Im = sqrt(-D)/(2*a);
        cout <<"x1 = " << Re << " + " << Im << "i" << endl;
        cout <<"x1 = " << Re << " - " << Im << "i" << endl;
        return 0;
    } else
    {
        x1 = (-b+sqrt(D))/2*a;
        x2 = (-b-sqrt(D))/2*a;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
        return 0;
    }
}