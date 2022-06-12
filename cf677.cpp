#include<bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	
	int n, hf,count = 0;
	cin >> n >> hf;
	
	while(n--){
		int hp;
		cin >> hp;
		
		if(hp > hf){
			count += 2;
		}
		else{
			count++;
		}
	}
	
	cout << count << endl;
	
	return 0;
}
