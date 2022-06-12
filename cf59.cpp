#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	
	string s;
	cin >> s;
	
	int lower = 0, upper = 0;
	
	int n = s.size();
	
	for(int i=0; i < n; i++){
		if(s[i] > 92){
			lower++;
		}
		else{
			upper++;
		}
	}
	
	if(lower > upper || upper == lower){
		for(int i = 0; i < n; i++){
			if(s[i] < 92){
				s[i] += 32;
			}
		}
	}
	else{
		for(int i = 0; i < n; i++){
			if(s[i] > 92){
				s[i] -= 32;
			}
		}
	}
	
	cout << s;
	
	return 0;
}
