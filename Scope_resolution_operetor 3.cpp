#include<iostream>
using namespace std;
char a='m';
static int b =40;

int main()
{
	char a = 's';
	
	cout<<"The static variable :"<<::b<<endl;
	cout<<"The global variable is:"<<::a<<endl;
	cout<<"Value of Local variable is:"<<a<<endl;
}
