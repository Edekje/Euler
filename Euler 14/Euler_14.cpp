#include <iostream>

using namespace std;

int main()
{
	int stepcounter;			//Set up the counter of the amount of collatz-steps
	long long int num;			//The number that is worked on
	int greatestchainlength = 0;//The length of the longest chain	
	int greatestchain = 1;		//Length of the most worked number
	
	for(int i = 1; i < 1000000; i++)
	{
		stepcounter = 0;		// Reset step count and worked number
		num = i;
		while(num != 1)			// Bring it to 1, find the amount of needed steps
		{
			if(num % 2 == 0)
			{
				num = num / 2;
			}
			else
			{
				num = num * 3 + 1;
			}
			stepcounter++;
		}
		if(stepcounter>greatestchainlength)	//Is it a record breaker? + Output
		{
			greatestchainlength = stepcounter;
			greatestchain = i;
			cout << greatestchain << ' ' << greatestchainlength << '\n';
		}
	}
	return 0; // Exec in ~1.5 s
}