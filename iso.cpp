#include<bits/stdc++.h>
using namespace std;
bool solve(string& e, string& v, int n, int k) {
	if(n != k) return false;
	
	int hash[26] = {};
	bool marked[26] = {};
	memset(hash, -1, sizeof hash);
	
	for(int i = 0; i < n; i++) {
		
		if(hash[e[i] - 'a'] == -1) {
			
			if(marked[v[i] - 'a']) return false;
			
			marked[v[i] - 'a'] = true;
			hash[e[i] - 'a'] = v[i] - 'a';
		}	
		else if(hash[e[i] - 'a'] != v[i] - 'a') return false;
	}	

	return true;
}

int main() {
	
	string e;
	string v;
	
	cin >> e;
	cin >> v;
	
	if(solve(e, v, e.length(), v.length())) cout << "Yes\n";
	else cout << "No\n";
	
	return 0;
}
