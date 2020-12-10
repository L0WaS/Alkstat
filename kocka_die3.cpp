#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;


int main()
{
	double S=0;
	cout <<"Adjon meg egy maximum erteket amihez valosziniseget fogunk szamolni: "<<endl;
	cin>>S;

	while(S<2 || S>=12)
	{
		cout<<"1 es 12 kozott adj meg erteket, de ha ennyire erdekel, hogy miert elmondom. 1-nel 0% a valoszinuseg, 12-nel pedig 100%!"<<endl<<"Adj meg egy uj erteket: "<<endl;
		cin>>S;
	}
	double o=pow(6,2);
	double jo=0;

	for(double  i=1;i<7;i++)
        {
		for(double j=1;j<7;j++)
		{
				if (i+j<=S)
				{
					jo++;
				}

		}
	}
	cout<<"P erteke: "<<jo/o;

	return 0;
} 
