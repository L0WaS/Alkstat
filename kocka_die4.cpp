#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int nagyobb(int n, int m);

int main()
{
	double M,n;

	cout << "Adja meg hany kockaval szeretne dobni:"<<endl;
	cin>>n;

	while(n<0 || n>30)
	{
		cout<<"adjon meg egy uj szamot 0-30 kozott: ";
		cin>>n;
	}

	cout << "Adja meg a dobott szamok maximumat: "<<endl;
	cin>>M;

	while(M<0 || M>10)
	{
		cout<<"adjon meg egy uj szamot 0-0 kozott: ";
		cin>>M;
	}

	double ossz=pow(6,n);
	double jo=0;

	int maksz;

	for(double i=1;i<7;i++)
        {
		for(double j=1;j<7;j++)
		{
			maksz=nagyobb(i,j);

			if (maksz==M)
			{jo++;}
		}
	}

	cout<<"P erteke: "<<jo/ossz;
	return 0;
}

int nagyobb(int n, int m)
{
int maksz=n;

	if (m>=n){
		maksz=m;
	}
	return maksz;
} 
