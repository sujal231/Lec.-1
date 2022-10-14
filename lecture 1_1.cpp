#include<iostream>
using namespace std;
main()
{
	int a[10],i,n;
	cout<<"Enter size";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter value";
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
		cout<<a[i]<<endl;
		}
	}
	
	
}
