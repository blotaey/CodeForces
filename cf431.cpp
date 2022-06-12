#include<bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a[5];
	for(int i=1; i <= 4; i++){
		cin >> a[i];
	}
	string s;
	cin >> s;
	int sum = 0;
	for(int i=0; i < s.size(); i++){
		sum += a[s[i] - '0'];
	}
	cout << sum << endl;
	return 0;
}
