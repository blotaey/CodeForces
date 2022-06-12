    #include<bits/stdc++.h>
     
    #define int long long int
    #define F first
    #define S second
    #define pb push_back
     
    using namespace std;
     
    int32_t main(){
     
    	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);
    	
    	int x = 0;
    	for(int i=1; i <= 5; i++){
			for(int j = 1; j<= 5; j++){
				cin >> x;
				if(x == 1)
				{
					cout << abs(i-3) + abs(j - 3) << endl;
				}
			}
		}
    	
    	return 0;
    }
