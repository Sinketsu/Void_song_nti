#include <iostream>
#include <map>
#include <string>

using namespace std;

int k, n, c, val;
int t, t1;
string st;
map<int, string> things;
map<int, string> comms;

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> k >> n >> c;
    for (int i = 0; i < k; i++)
    {
        cin >> t >> st;
        things[t] = st;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> t >> st;
        comms[t] = st;
    }
    for (int i = 0; i < c; i++)
    {
        cin >> t >> t1 >> val;
        cout << comms[t1] << ' ' << things[t] << ' ' << val << endl;
    }
    return 0;
}
