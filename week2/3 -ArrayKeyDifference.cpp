
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		sort(arr,arr+n);
		int key;
		cin>>key;
		int c=0;
		int i=0,j=0;
		while(i<n && j<n)
		{
			if(arr[j]-arr[i]==key){
				c++;
				i++;
				j++;
			}
			else if(arr[j]-arr[i]>key){
				i++;
			}
			else if(arr[j]-arr[i]<key){
				j++;
			}
		}	
		cout<<c<<endl;
	}
}
