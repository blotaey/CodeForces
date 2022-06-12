#include<bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, ans = 0;
	cin >> n;
	int x[n], y[n];
	
	for(int i = 0; i < n; i++){
		cin >> x[i];
		cin >> y[i];
	}
	
	for(int i =0 ; i< n; i++){
		for(int j = 0; j < n; j++){
			if(x[i] == y[j]) ans++;
		}
	}
	
	cout << ans;

	return 0;
}
