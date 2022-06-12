#include<bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, count = 0;
	cin >> n;
	string arr[n+1];
	
	for(int i =0; i < n; i++){
		char letter;
		cin >> letter;
		arr[i] = letter;
	}
	
	for(int i = 0; i < n; i++){
		for(int j = i+1; j<n; j++){
			if(arr[i] == arr[j]){
				count++;
				break;
			}
			else{
				break;
			}
		}
	}
	
	
	cout << count;

	return 0;
}
