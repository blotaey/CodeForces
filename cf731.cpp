#include<bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s;
	cin >> s;
	char start = 'a';
	int sum = 0;
	
	for(int i = 0; i < s.size(); i++){
		int l1 = abs(s[i] - start);
		int l2 = 26 - abs(l1);
		sum += min(l1,l2);
		start = s[i];
	}
	
	cout << sum << endl;

	return 0;
}
