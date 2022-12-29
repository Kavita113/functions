#include<iostream>
using namespace std;
float area(int rad)
{
	return 3.14*rad*rad;
}
float circum(int rad)
{
	return 2*3.14*rad;
 } 
int main()
{
	//start your code from here
    int r;
    cin>>r;
    cout<<"Area= "<<area(r)<<endl;
    cout<<"Circumference= "<<circum(r)<<endl;
	return 0;
}

