#include <iostream>
#include <math.h>

using namespace std;


int main()
{
	int Tomb1,Tomb2;
	double f,s=0,a=0;

	cout << "Adja meg az elso vektor hosszat:"<<endl;
	cin>>Tomb1;

	cout << "Adja meg a masodik vektor hosszat:"<<endl;

	cin>>Tomb2;

	if(Tomb1<1 || Tomb2<1 || Tomb1>50 || Tomb2>50){
	 	cout<<"A vektor hosszt 1-50 kozott add meg:"<<endl;
		cout<<"elso vektor";cin>>Tomb1;
		cout<<endl<<"masodik vektor";cin>>Tomb2;
	}

	int t[Tomb1], t1[Tomb2];

	for(int i=0;i<Tomb1;i++)
	{
	    cout<<"Add meg a "<<i+1<<". elemet: " <<endl;
		cin>>t[i];
		if (t[i]<-1000 || t[i]>1000)
		{
			cout<<"-1000 es 1000 kozotti szamot legyszi: "<<endl;
			cin>>t[i];
		}

	}

	for(int i=0;i<Tomb2;i++)
	{
	    cout<<"Add meg a "<<i+1<<". elemet: " <<endl;
		cin>>t1[i];
		if (t1[i]<-1000 || t1[i]>1000)
		{
			cout<<"adjon meg uj szamot: "<<endl;
			cin>>t1[i];
		}
	}
   for (int f=0; f<Tomb1; f++)
   {
       if (t[f]<0)
       {
           s++;
       }
   }
   for (int f=0; f<Tomb2;f++)
   {
       if (t1[f]<0)
       {
           a++;
       }
   }

   double b=(s/Tomb1) ,c=(a/Tomb2), d=((Tomb1-s)/Tomb1), e=((Tomb2-a)/Tomb2), g;


   g=b*e+c*d;

   cout<<"A valoszinusege hogy a szorzatunk pozitiv: "<<1-g<<endl;


	return 0;
} 
