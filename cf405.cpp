#include<bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    int arr[n];
    
    for(int i=0; i < n; i++){
		int number;
		cin >> number;
		
		arr[i] = number;
	}
	
	sort(arr,arr+n);
	
	for(int i=0; i < n; i++){
		cout << arr[i] << " ";
	}
	return 0;
}
