#include <iostream>
#include<cstdlib>
#include<algorithm>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,a,b,c,i;
    long long int cont,cont2;
    cin>>t;
    while(t--)
    {
       int len,p,i;
       cont=0;
       cont2=0;
       int one=0;
       cin>>len>>p;
       int num[p];
       for(i=0;i<p;i++)
       {
           cin>>num[i];
       }
       sort(num,num+p);
       for(i=0;i<p-1;i++)
       {
           if(num[i]!=1)
           {
               cont+=num[i]-1;
               one+=num[i];
           }
           else
           {
           one++;}
       }
       cout<<cont+one<<'\n';
    }

    return 0;
}