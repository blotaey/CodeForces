#include<bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	int arr[n+1];
	
	for(int i = 1; i <= n; i++){
		int num;
		cin >> num;
		
		arr[num] = i;
	}
	
	for(int i = 1; i <=n; i++){
		cout << arr[i] << " ";
	}
	return 0;
}
