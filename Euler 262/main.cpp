#include <iostream>
#include <math.h>

using namespace std;

double f(double x, double precision, double step) // x = the x given in the equation precision = the required precision size of the first step
{
	const double z = 6556.151335620042;		// The height which must be reached
    double ans;
    double y = 0; // It starts estimating from the first step
    while(ans < z - precision || ans > z + precision) // As long as its not exact enough...
    {
        y +=step;
        ans = ( 5000-0.005*(x*x+y*y+x*y)+12.5*(x+y) ) * pow(2.71828182846, static_cast <double>( -fabs(0.000001*(x*x+y*y)-0.0015*(x+y)+0.7) ));
        step = (ans > z == step > 0) ? -step/2 : step;
		//cout << y << ' ' << step << '\n';
    }
	
    return y;
}

int main()
{
	double x;//, precision, step;
	//cout << "Please enter the variables for f(x, precision, step)!: " << endl;
	
	while(x!= 1337)
	{
		cin >> x ;//>> precision >> step;
		cout << f(x, 0.001, 100) << endl;
	}
	
	
	return 0;
}