#include <iostream>
using namespace std;
int main() 
{
    int romanToInt(string n) 
        int v = 0;
        map<char, int> roman;
        roman['I'] = 1;
        roman['V'] = 5;
        roman['X'] = 10;
        roman['L'] = 50;
        roman['C'] = 100;
        roman['D'] = 500;
        roman['M'] = 1000;
        for (int i = 0; i < n.length() - 1; i ++) {
            int cur = roman[n[i]];
            int next = roman[n[i + 1]];
            if (cur >= next) {
                v += cur;
            } else {
                v -= cur;
            }
        }
        return v + roman[n[n.length() - 1]];
		return 0;
}
