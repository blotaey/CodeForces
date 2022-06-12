#include<bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	int arr[n];
	
	for(int i =0; i < n; i++){
		cin >> arr[i];
	}
	
	int s=0, d=0;
	int left = 0;
	int right = n-1;
	int turn = 0;
	
	while(n--){
		if(turn%2==0){
			if(arr[left]>arr[right]){
				s+= arr[left];
				left++;
			}
			else{
				s+= arr[right];
				right--;
			}
		}
		else{
			if(arr[left] > arr[right]){
				d+= arr[left];
				left++;
			}
			else{
				d+= arr[right];
				right--;
			}
		}
		
		turn++;
	}
	
	cout << s << " " << d;
	
	
	return 0;
}
