#include <iostream>
#include <ctime>
#define MAX 1000000000
#define SWAPI(x,y) {temp=*x; *x=*y; *y=temp;}
#define SWAPD(g,h) {temp2=*g; *g=*h; *h=temp;}
using namespace std;

main()
{
int a=1, b=2, temp=0, *x=&a, *y=&b;
double n=1.5,m=2.5, temp2=0, *g=&n, *h=&m;
clock_t c0, c1, c2, c3;

	cout << "File " << __FILE__ << endl;
	
	c0=clock();
	for(int i=0;i<MAX;i++)
	{
		SWAPI(x,y);
	}
	c1=clock();
	
	cout << "Process for int: " << (double)(c1-c0)/CLOCKS_PER_SEC << " sec" << endl;

	c2=clock();
	for(int i =0; i < MAX; i++)
	{
		SWAPD(g,h);
	}
	c3=clock();

	cout << "Process for double: " << (double)(c3-c2)/CLOCKS_PER_SEC << " sec" << endl;

}

	

