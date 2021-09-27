#include<bits/stdc++.h>
using namespace std;
void fcommon(int a1[],int a2[],int n, int m)
{
	int i=0,j=0;
	while(i<n  && j<m)
	{
		if(a1[i]==a2[j]){
		
			cout<<a1[i]<<" ";
			i++;
			j++;
		}
		else if(a1[i]>a2[j])
			j++;
		else 
			i++;
	}

}
int main()
{
	int n,m;
	cin>>n;	
	int arr1[n];	
	for(int i=0;i<n;i++)
		cin>>arr1[i];
		
        cin>>m;
	sort(arr1,arr1+n);
    int arr2[m];
	for(int j=0;j<m;j++)
		cin>>arr2[j];
	sort(arr2,arr2+m);
	fcommon(arr1,arr2,n,m);
}
