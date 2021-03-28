#include<iostream>
using namespace std;

int my_var = 0;
int main(void)
{
	int my_var = 0;
	::my_var = 1; //Swt global my_var to 1
	my_var  = 2; //Set local my_var to 2
	cout << ::my_var <<  "," <<my_var;
	return 0;
}
