#include<bits/stdc++.h>
using namespace std;
bool solve(string& a, string& v, int n, int k) {
	if(n != k) return false;
	
	int hash[26] = {};
	bool marked[26] = {};
	memset(hash, -1, sizeof hash);
	
	for(int i = 0; i < n; i++) {
		
		if(hash[a[i] - 'a'] == -1) {
			
			if(marked[v[i] - 'a']) return false;
			
			marked[v[i] - 'a'] = true;
			hash[a[i] - 'a'] = v[i] - 'a';
		}	
		else if(hash[a[i] - 'a'] != v[i] - 'a') return false;
	}	

	return true;
}

int main() {
	
	string a;
	string v;
	
	cin >> a;
	cin >> v;
	
	if(solve(a, v, a.length(), v.length())) cout << "Yes\n";
	else cout << "No\n";
	
	return 0;
}
