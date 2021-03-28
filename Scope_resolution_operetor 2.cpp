#include<iostream>
using namespace std;
class ScopeResolution
{
	public:
		static int count;
	};
	int ScopeResolution::count = 10; // define data static member
	
	int main()
	{
		int ScopeResolution = 0; //hides class type ScopeResolution
		cout << ScopeResolution::count <<endl;   //Use static member of class
	}

