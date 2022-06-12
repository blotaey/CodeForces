#include<bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, groups = 0;
	bool flag1 = true, flag2 = true;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		int number;
		cin >> number;
		
		if(number == 10){
			flag1 = true;
		}else{
			if(flag1 == true){
				flag1 = false;
				groups += 1;
			}
		}
		
		if(number == 01){
			flag2 = true;
		}
		else{
			if(flag2 == true){
				flag2 = false;
				groups += 1;
			}
		}
	
	}
	
	cout << groups;
	
	
	return 0;
}
