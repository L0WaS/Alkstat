#include <iostream>
#include <math.h>

using namespace std;


int main()
{
    int a;
    cout<<"Add meg hany elemu legyen a valsegi valtozod: "<<endl;
    cin>>a;
    while(a<2 || a>100)
    {
        cout<<"2 es 100 kozotti erteket adj meg!" <<endl;
        cin>>a;
    }
    double tomb1[a], tomb2[a], ve=0;
    cout<<"Add meg az ertekkeszletet:"<<endl;
    for(int i=0; i<a; i++)
    {
        cin>>tomb1[i];
    }
    cout<<"Add meg a hozzajuk tartozo valsegeket:"<<endl;
    for(int i=0; i<a; i++)
    {
        cin>>tomb2[i];
        while(tomb2[i]<0 || tomb2[i]>1)
        {
            cout<<"Valseghez 0 es 1 kozotti erteket adj meg!"<<endl;
            cin>>tomb2[i];
        }
    }

        for(int i=0; i<a; i++)
        {
            ve+=tomb1[i]*tomb2[i];
        }
        cout<<"A varhato ertek: "<<ve<<endl;

        double atlag, szoras;

        for (int i=0; i<a; i++)
        {
            atlag+=tomb1[i];
        }

        atlag=atlag/a;

        for (int i=0; i<a; i++)
        {
            szoras+=pow(tomb1[i]-atlag, 2);
        }

        szoras=szoras/a;

        szoras=sqrt(szoras);
        cout<<"A szoras: "<<szoras;

    return 0;
}

