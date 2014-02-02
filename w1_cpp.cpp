#include <iostream>
#include <ctime>
using namespace std;

double intswap(int *a, int *b);
double dubswap(double *g, double *h);

main()
{
int a=5, b=3;
double n=1.5, m=3.14, clockA, clockB;
int *x=&a, *y=&b;
double *g=&n, *h=&m;

	cout << "File w1_cpp.cpp" << endl;
	clockA = intswap(x,y);
	clockB = dubswap(g,h);
	
	cout << "Processing for int:   "  << clockA << "secs" << endl;
	cout << "Processing for double: " << clockB << "secs" << endl;

}	

double intswap(int *x, int *y)
{
int temp=0;
double clockI=0;
clock_t c0, c1;

	c0 = clock();
	for(int i = 0; i < 1000000000; i++)
	{	
		temp = *x;
		*x=*y;
		*y = temp;
		
	}
	c1 = clock();
	clockI = (double)(c1-c0)/CLOCKS_PER_SEC;

return clockI;
}

double dubswap(double *g, double *h)
{

double clockD=0, temp=0;
clock_t c0, c1;

	c0 = clock();
	for(int i=0; i < 1000000000; i++)
	{
		temp = *g;
		*g=*h;
		*h=temp;
	}
	c1 = clock();
	clockD = (double)(c1-c0)/CLOCKS_PER_SEC;

return clockD;
}

