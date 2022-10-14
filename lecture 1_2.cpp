#include<iostream>
#include<string.h>
using namespace std;
main(){
char s[100];
int i;
cout<<"Enter the string: ";
gets(s);
for(i=0;s[i]!='\0';i++)
{
	if(s[i]>='a' && s[i]<='z')
	{
		s[i]=s[i]-32;
	}
}
	cout<<s<<endl;
	
}
