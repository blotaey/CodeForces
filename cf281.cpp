#include<bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s;
	cin >> s;
	
	if(s[0] >= 97){
		s[0] -= 32;
	}
	
	cout << s << endl;

	return 0;
}
