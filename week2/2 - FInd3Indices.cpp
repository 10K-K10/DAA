#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n],count=0;
		for(int i=0;i<n;i++)
			cin>>arr[i];
		for(int i=0;i<n-2;i++){
			for(int j=i+1;j<n-1;j++){
				for(int k=j+1;k<n;k++){
					if(arr[i]+arr[j]==arr[k]){
						cout<<i+1<<", "<<j+1<<", "<<k+1<<"\n";
					
						count=1;
					}
				}
			}
		}
		if(count==0)
			cout<<"No sequence found\n";
	}
}
