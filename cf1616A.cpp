#include<bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

int32_t main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		map<int,int> m;

		for(int i=0; i < n; i++){
			int temp;
			cin >> temp;
			if(m[temp]){
				m[-temp]++;
			}

			m[temp]++;
		}

		cout << int(m.size()) << endl;
	}


	return 0;

}