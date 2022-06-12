#include<bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, a=0, d=0;
	cin >> n;
	
	string s;
	cin >> s;
	
	for(int i=0; i<n; i++){
		if(s[i] == 'A'){
			a++;
		}
		else{
			d++;
		}
	}
	
	if(d>a){
		cout << "Danik" << endl;
	}
	else if(a > d){
		cout << "Anton" << endl;
	}
	else{
		cout << "Friendship" << endl;
	}
	return 0;
}
