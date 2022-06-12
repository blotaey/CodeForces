#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	string s;
	cin >> s;
	
	unordered_set<char> str;
	
	for(int i=0; i< s.size(); i++){
		str.insert(s[i]);
	}
	
	if(str.size()%2 == 1){
		cout << "IGNORE HIM!" << endl;
	}
	else{
		cout << "CHAT WITH HER!" << endl; 
	}
	
	return 0;
}
