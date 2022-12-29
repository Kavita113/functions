#include<iostream>
using namespace std;
void eligibility(int age)
{
	if(age>=18)
	cout<<"yes";
	else
	cout<<"no";
}
int main()
{
	//start your code from here
	int age;
	cin>>age;
	eligibility(age);
	return 0;
}

