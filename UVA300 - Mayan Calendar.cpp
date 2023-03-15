//UVA300 - Mayan Calendar
#include <bits/stdc++.h>
using namespace std;
#define IO                             \
    ios_base ::sync_with_stdio(false); \
    cin.tie(0);

int main()
{
    const map<string, int> m = {
        {"pop", 0},
        {"no", 1},
        {"zip", 2},
        {"zotz", 3},
        {"tzec", 4},
        {"xul", 5},
        {"yoxkin", 6},
        {"mol", 7},
        {"chen", 8},
        {"yax", 9},
        {"zac", 10},
        {"ceh", 11},
        {"mac", 12},
        {"kankin", 13},
        {"muan", 14},
        {"pax", 15},
        {"koyab", 16},
        {"cumhu", 17},
        {"uayet", 18}};
    const vector<string> v = {
        "imix", "ik", "akbal", "kan", "chicchan", "cimi", "manik", "lamat", "muluk", "ok", "chuen", "eb", "ben", "ix", "mem", "cib", "caban", "eznab", "canac", "ahau"};
    IO;
    int N;
    cin >> N;
    cout << N << endl;
    while (N--)
    {
        int b;
        string a, c;
        int a2;
        cin >> a >> c >> b;
        a2 = stoi(a.substr(0, a.size() - 1));
        int sum = b * 365 + m.at(c) * 20 + a2;
        cout << sum % 13 + 1 << " " << v[sum % 20] << " " << sum / 260 << endl;
    }

    return 0;
}
