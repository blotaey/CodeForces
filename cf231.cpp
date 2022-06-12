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
	
	while(n--){
		int a,b,c;
		cin >> a >> b >> c;
		
		if((a == 1 && b == 1) || (a == 1 && c == 1) || (b == 1 && c == 1)) ans++;
	}
	
	cout << ans;
	

	return 0;
}
