#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int N;
	double P;

	cout << "Add meg a tetelek szamat:"<<endl;
	cin>>N;

	while(N<1 || N>30)
	{
		cout<<"2 es 30 kozott add meg a tetelek szamat: ";
		cin>>N;
	}

	cout << "Add meg milyen eselyre palyazol (0 es 1 kozotti szam legyen): "<<endl;
	cin>>P;

	while(P<0 || P>1)
	{
		cout<<"adjon meg mas erteket 0-1 kozott: ";
		cin>>P;
	}

	double K=(N*P-1);
	cout<<ceil(K);
}
