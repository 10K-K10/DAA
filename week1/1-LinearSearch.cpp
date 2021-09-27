#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int key,count=0;
		cin>>key;
		for(int i=0;i<n;i++){
			if(key==arr[i])
			{
				count=1;
				cout<<"PRESENT "<<i+1<<"\n";
				break;
			}
		}
		if(!count)
			cout<<"NOT PRESENT\n";
		
	}
}
