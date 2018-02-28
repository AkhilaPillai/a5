#include <iostream>
using namespace std;
int main() 
{
    int romanToInt(string s) 
        int r = 0;
        map<char, int> roman;
        roman['I'] = 1;
        roman['V'] = 5;
        roman['X'] = 10;
        roman['L'] = 50;
        roman['C'] = 100;
        roman['D'] = 500;
        roman['M'] = 1000;
        for (int i = 0; i < s.length() - 1; i ++) {
            int cur = roman[s[i]];
            int next = roman[s[i + 1]];
            if (cur >= next) {
                r += cur;
            } else {
                r -= cur;
            }
        }
        return r + roman[s[s.length() - 1]];
		return 0;
}
