#include<bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,t,k,d;
	cin >> n >> t >> k >> d;
	int x = ceil((double) d/t);
	n = n - (x*k);
	if(n>0){
		if(d%t!=0) cout << "YES" << endl;
		else{
			if(n>k) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
	else{
		cout << "NO" << endl;
	}

	return 0;
}
