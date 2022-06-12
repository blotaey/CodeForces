#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,x=0;
	char x1,x2,x3;
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> x1 >> x2 >> x3;
		if(x1=='+' or x2=='+' or x3=='+'){
			x++;
		}
		else{
			x--;
		}
	}
	
	cout << x << endl;
	
	
	return 0;
}
