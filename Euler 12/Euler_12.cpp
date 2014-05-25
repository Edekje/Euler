//Het idee:
//Function factornum telt het aantal factoren in een long long int
// Steeds wordt een num opgeteld voor het volgende triangle num totdat factor num = 500
#include <iostream>
#include <math.h>
using namespace std;

int numfactors(long long int tofactor)
{
	int factorcounter=0;
	int sqrttofactor = sqrt(tofactor);
	for(long long int i = 1; i <= sqrttofactor+1; i++){
		if(tofactor % i == 0){
			factorcounter += 1;
		}
	}
	factorcounter *= 2;
	if(factorcounter>400){
	cout << tofactor << " " << factorcounter << '\n';}
	return factorcounter;
}

int main()
{
	long long int trianglenum = 1;
	for(long long int i = 2; numfactors(trianglenum) < 800; i++)
	{
		trianglenum += i;
	}
	return 0;
}