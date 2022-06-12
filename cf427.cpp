#include<bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

int32_t main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, sum=0, counter = 0;
	cin >> n;
	
	for(int i=0; i < n; i++){
		int s;
		cin >> s;
		
		if(s >= 0) sum += s;
		else{
			if(sum == 0) counter++;
			else sum--;
		}
	}
	
	cout << counter << endl;
	

	return 0;
}
