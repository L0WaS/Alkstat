#include <iostream>
#include <math.h>

using namespace std;

int fact(int n);

int main()
{
	int N,M;

	cout << "Add meg N elemeinek szamat: "<<endl;
	cin>>N;

	cout << "Add meg M elemeinek szamat: "<<endl;
	cin>>M;

	double ossz=pow(2,N);
	double jo=(fact(N))/(fact(M)*fact(N-M));
	cout<<"Megoldas(P): "<<jo/ossz;

	return 0;
}

int fact(int n) {
   if ((n==0)||(n==1))
   return 1;
   else
   return n*fact(n-1);
}
