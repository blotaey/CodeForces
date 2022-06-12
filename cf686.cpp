#include<bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, x, kids = 0;
	cin >> n >> x;
	
	while(n--){
		char a;
		int b;
		cin >> a >> b;
		if(a == '+'){
			x += b;
		}
		else{
			if(x >= b) x-= b;
			else{
				kids++;
			}
		}
	}
	
	cout << x << " " << kids;
	return 0;
}
