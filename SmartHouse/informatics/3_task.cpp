#include <iostream>

using namespace std;

double curT, Theat, Tcold, Tt;

int main()
{
    cin >> curT >> Theat >> Tcold >> Tt;

    if (curT > Tt)
        cout << "cooler " << (curT - Tt)/Tcold << endl;
    else
        cout << "heater " << (Tt - curT)/Theat << endl;

    return 0;
}