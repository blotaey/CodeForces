#include<bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,m,a[101] = {0};
	int x,y;
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	cin >> m;
	for(int i = 1; i <= m; i++){
		cin >> x >> y;
		a[x-1]+=y-1;
		a[x+1]+=a[x]-y;
		a[x]=0;
	}
	
	for(int i = 1; i <= n; i++){
	   cout << a[i] << endl;
	}

	return 0;
}
