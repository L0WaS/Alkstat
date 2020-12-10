#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    int n, k, s=0;
    cout<<"Add meg hany dobokockaval szeretnel dobni!" <<endl;
    cin>>n;
    cout<<"Add meg melyik osszeg valoszinusegere vagy kivancsi!"<<endl;
   // cin>>k;
    vector<int> v;
    int t[6][n];

    for(int j=0; j<n; j++)
    {
        for(int i=0; i<6; i++)
        {
           t[i][j]=i+1;

        }
    }

   /* for(int j=0; j<6; j++)
    {
        for(int i=0; i<n; i++)
        {

             s=s+(t[j][i]);
             cout<<s<<endl;

            for(int k=0; k<n; k++)
            {

             if(t[j][k]>t[j][k+1])
             {
                 j=j-1;
             }
            }

        }


        v.push_back(s);
    }

    cout<<"A szam:" <<v[1];


    /*for(int j=0; j<n; j++)
    {
        for(int i=0; i<6; i++)
        {
           v.push_back(t[j]+t[i])

        }
    }
 */
 double l=pow(6,n);

 for (int j=0; j<l; j++)
 {
 s=0;
    for (int f=0; f<n; f++)
    {
     s+=t[j][f];
    }
 v.push_back(s);
 }

  for (int b=0; b<l; b++)
  {
      cout<<v[b]<<endl;
  }


    return 0;
}

 
