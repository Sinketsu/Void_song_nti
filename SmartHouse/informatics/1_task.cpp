#include <iostream>

using namespace std;

double tcolder, tcold, thot, thotter;

int main()
{
    ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0);
    cin >> tcolder >> tcold >> thot >> thotter;
    int n;
    double k;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        if (k < tcolder)
            cout << "colder" << endl;
        else if (k >= tcolder && k < tcold)
            cout << "cold" << endl;
        else if (k >= tcold && k <= thot)
            cout << "warm" << endl;
        else if (k > thot && k <= thotter)
            cout << "hot" << endl;
        else
            cout << "hotter" << endl;
    }
    return 0;
}