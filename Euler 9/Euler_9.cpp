#include <iostream>
#include <math.h>
using namespace std;

bool test(int a, int b)
{
	float csqr = sqrt(a*a + b*b);
	if(csqr != (int) csqr || csqr+a+b != 1000) { return false; }
	
	return true;
}

int main()
{

	for(int a = 1; a < 1000; a++)
	{
		for(int b = a + 1; b < 1000; b++)
		{
			if(test(a,b))
			{
			cout << a*b*sqrt(a*a+b*b);
			cin >> a;
			return 0;
			}
		
		}
	}
}