#include<bits/stdc++.h>
using namespace std;

int t, n, m;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> t;

	while(t--){
		cin >> n >> m;

		if(n<m) swap(n,m);
		if(m==1 && n>= 3) cout << -1 << endl;
		else cout << 2*n-2-(n+m)%2 << endl;
	}


	return 0;
}