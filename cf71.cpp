#include<bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; 
	cin >> n;
	while(n--){
		string s;
		cin >> s;
		int count = 0;
		
		if(s.size() <= 10){
			cout << s << endl;
		}
		else{
			int size = s.size() - 1;
			for(int i = 1; i < size; i++){
				count++;
			}
			
			cout << s[0] << count << s[count + 1] << endl;
		}
	}
	

	return 0;
}
