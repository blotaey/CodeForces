#include<bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int i = 0;
	char a;
	unordered_set<int> set;	
	
	while(true){
		cin >> a;
		bool flag1 = false;
		bool flag2 = false;
		if(a == '{'){
			cin >> a;
			if(a == '}'){
				if(flag1 == false) i++; 
				break;
			}
			else{
				flag1 = true;
				set.insert(a);
			}
		}
		else{
			if(a == '}') break;
			else if(a == ','){
				flag2 = true;
			}
			else{
				if(flag2 == true) continue;
				else set.insert(a);
			}
		}
	}
	
	if(i == 1){
		cout << 0;
	}
	else{
		cout << set.size();
	}
	return 0;
}
