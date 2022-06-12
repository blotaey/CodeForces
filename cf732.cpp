#include<bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int k, n, count=0;
	cin >> k >> n;
	

	for(int i = 1; i <= 9; i++){
		int mult = i * k;
			
		if(mult % 10 == 0 || mult % 10 == n){
			count = i;
			break;
		}	
	}

	cout << count;

	return 0;
}
