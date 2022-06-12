#include<bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, count=0;
	cin >> a >> b;
	
	while(a<=b){
		a*=3;
		b*=2;
		count++;
	}
	
	cout << count << endl;

	return 0;
}
