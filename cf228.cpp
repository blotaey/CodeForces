#include<bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	unordered_set<int> set;
	
	for(int i = 0; i < 4; i++){
		int n;
		cin >> n;
		set.insert(n);
	}
	
	cout << 4 - set.size();  

	return 0;
}
