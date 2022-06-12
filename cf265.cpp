#include<bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int i=0,j=0;
	string s, t;
	cin >> s >> t;
	
	
	while(j < t.size()){
		if(s[i] == t[j]) i++;
		
		j++;
	}
	
	cout << i + 1;
	
	
	
	return 0;
}
