#include<bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s, ss;
	cin >> s;
	
	for(int i = 0; i < s.size(); i++){
		if(s[i] != '+'){
			ss.push_back(s[i]);
		}
	}
	
	sort(ss.begin(), ss.end());
	cout << ss[0];
	for(int i = 1; i < ss.size(); i++){
		cout << "+" << ss[i];
	}
	
	return 0;
}
