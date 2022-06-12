#include<bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s = "abcdefghijklmnopqrstuvwxyz";
	int number = 26;
	int n, k;
	cin >> n >> k;
	
	int aux = k;
	
	for(int i = 0; i < n; i++){
		int m = min(n,number);
		if(k == 0){
			k = aux;
			cout << s[m-k];
			k--;
		}
		else{
			cout << s[m-k];
			k--;
		}
	}
	
	return 0;
}
