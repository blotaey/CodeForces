#include<bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back
using namespace std;

int n, arr[1000001];

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            cout << arr[1] - arr[0] << " " << arr[n - 1] - arr[0] << endl;
        } else if (i == n - 1) {
            cout << arr[n - 1] - arr[n - 2] << " " << arr[n - 1] - arr[0] << endl;
        } else {
            cout << min(arr[i + 1] - arr[i], arr[i] - arr[i - 1]) << " " << max(arr[i] - arr[0], arr[n - 1] - arr[i]) << endl;
        }
    }
	return 0;
}
