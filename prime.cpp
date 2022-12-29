#include<iostream>
using namespace std;
int prime(int n)
{
	for(int i=2;i<=n-1;i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	//start your code from here
	/*int n,i;
	cin>>n;
	
	for( i=2;i<=n-1;i++)
	{
		if(n%i==0)
		{
		cout<<"Not a prime no";	
		break;
		}
		
	}
	if(n==i)
	{
		cout<<"prime no"<<endl;
	}
	*/
	int a,b;
	cin>>a>>b;
	for(int i=a;i<=b;i++)
	{
		if(prime(i))
		{
			cout<<i<<" ";
		}
	}
	return 0;
}

