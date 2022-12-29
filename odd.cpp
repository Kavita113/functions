#include<iostream>
using namespace std;
void odd(int a,int b)
{
for(int i=a;i<=b;i++)
	{
		if(i%2!=0)
		{
			cout<<i<<endl;
		}
		else
		{
			continue;
		}
	}	
}
int main()
{
	//start your code from here
	int a,b;
	cin>>a>>b;
	odd(a,b);
	
	return 0;
}

