#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int key;
		cin>>key;
		int *low=lower_bound(arr, arr+n, key);
		if(low==(arr+n) or *low!=key){
		
			cout<<"Not found\n";
			continue;
		}
		int *high=upper_bound(arr, arr+n, key);
		cout<<key<<" "<<high-low<<"\n";
	}
}
