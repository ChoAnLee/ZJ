
#include <iostream>
using namespace std;
int main() {
    int k = -7;
    string s;
 
    while(getline(cin, s)) {
        int len = s.length();
        for (int i=0; i<len; i++)
            s[i] = s[i] + k;
        cout << s << endl;
    }
    return 0;
}
