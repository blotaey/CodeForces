#include<bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, maxi, empty,count=0,ans = 0;
	cin >> n >> maxi >> empty;
	
	for(int i = 0; i < n; i++){
		int a;
		cin >> a;
		if(a<=maxi){
			count+=a;
			if(count > empty){
				ans++;
				count=0;
			}
		}
	}
	
	
	cout << ans;

	return 0;
}
