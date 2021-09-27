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
		for(int i=0;i<n;i++)
			cin>>arr[i];
		int key;
		cin>>key;
		int lb=0, ub=n-1, mid, comp=0,counter=0;
		while(lb<=ub){
			mid=lb+(ub-lb)/2;
			comp++;
			if(arr[mid]==key){
				cout<<"PRESENT "<<mid+1<<"\n";
				break;
			}
			else if(arr[mid]>key){
				ub=mid-1;
			}
			else{
				lb=mid+1;
			}
		}
		cout<<"Comparisons = "<<comp<<endl;
	}
}
