#include<bits/stdc++.h>
using namespace std;

void find(int arr[],int n, int key)
{
	int low,high;
	int found_pair=0;
	sort(arr,arr+n);
	low=0;
	high=n-1;
	for(int i=0;i<n;i++)
	{
		if((arr[low]+arr[high])>key)
			high--;
		
		else if ((arr[low]+arr[high])<key)
			low++;
		
		else
		{	
			found_pair=1;
			break;
		}
	}

		if(found_pair==1)
		{
			cout<<arr[low]<<" "<<arr[high]<<endl;
		}
		else
		{
			cout<<"No Such Elements Exist"<<endl;
		}
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	
	int n;
	cin>>n;
	int arr[n];
	for (int i=0;i<n;i++)
		cin>>arr[i];
	int key;
	cin>>key;
	//cout<<key;
	find(arr, n, key);
	}
	return 0;
}
