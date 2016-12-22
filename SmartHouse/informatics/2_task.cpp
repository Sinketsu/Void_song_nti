#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ios_base;

string prev;
int colder, cold, hot, hotter;
bool cool, heat;

int main()
{
    prev = "warm";
    cool = false;
    heat = false;
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s == "colder")
        {
            if (prev == "colder")
            {
                colder++;
                if (colder == 3)
                {
                    if (cool == true && heat == false)
                    {
                        cout << "cooler off; heater on" << endl;
                        cool = false;
                        heat = true;
                    } else if (cool == false && heat == false)
                    {
                        cout << "heater on" << endl;
                        heat = true;
                    } else if (cool == true && heat == true)
                    {
                        cout << "cooler off" << endl;
                        cool = false;
                    }
                    else
                        cout << "none" << endl;
                } else
                    cout << "none" << endl;
            } else
            {
                colder = 1;
                cout << "none" << endl;
            }
            prev = s;
        }
        if (s == "cold")
        {
            if (prev == "warm" || prev == "hot" || prev == "hotter")
            {
                cold = 1;
                cout << "none" << endl;
            } else if (prev == "cold")
            {
                cold++;
                if (cold == 3)
                {
                    if (cool == true)
                    {
                        cout << "cooler off" << endl;
                        cool = false;
                    }
                    else
                        cout << "none" << endl;
                } else
                    cout << "none" << endl;
            } else
            {
                cold = 4;
                cout << "none" << endl;
            }
            prev = s;
        }
        if (s == "warm")
        {
            cout << "none" << endl;
            prev = s;
        }
        if (s == "hot")
        {
            if (prev == "warm" || prev == "cold" || prev == "colder")
            {
                hot = 1;
                cout << "none" << endl;
            } else if (prev == "hot")
            {
                hot++;
                if (hot == 3)
                {
                    if (heat == true)
                    {
                        cout << "heater off" << endl;
                        heat = false;
                    } else
                        cout << "none" << endl;
                } else
                    cout << "none" << endl;
            }
            else
            {
                hot = 4;
                cout << "none" << endl;
            }
            prev = s;
        }
        if (s == "hotter")
        {
            if (prev == "hotter")
            {
                hotter++;
                if (hotter == 3)
                {
                    if (heat == true && cool == false)
                    {
                        cout << "heater off; cooler on" << endl;
                        heat = false;
                        cool = true;
                    } else if (heat == false && cool == false)
                    {
                        cout << "cooler on" << endl;
                        cool = true;
                    } else if (heat == true && cool == true)
                    {
                        cout << "heater off" << endl;
                        heat = false;
                    } else
                        cout << "none" << endl;
                } else
                    cout << "none" << endl;
            }
            else
            {
                hotter = 1;
                cout << "none" << endl;
            }
            prev = s;
        }
    }
    return 0;
}










