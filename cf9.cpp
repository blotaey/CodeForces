#include<bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a, b, maxi = 0;
	cin >> a >> b;
	
	if(a == 0 || b == 0 || (a == 0 && b == 0)){
		cout << "0/1" << endl;
		return 0;
	}
	
	maxi = max(a,b);
	
	if(maxi == 1){
		cout << "1/1" << endl;
		return 0;
	}
	else if(maxi == 2){
		cout << "5/6" << endl;
		return 0;
	}
	else if(maxi == 3){
		cout << "2/3" << endl;
		return 0;
	}
	else if(maxi == 4){
		cout << "1/2" << endl;
		return 0;
	}
	else if(maxi == 5){
		cout << "1/3" << endl;
		return 0;
	}
	else if(maxi == 6){
		cout << "1/6" << endl;
		return 0;
	}
	
	return 0;
}
