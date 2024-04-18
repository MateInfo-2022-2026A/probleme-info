#include <iostream>
using namespace std;
int a[100],n;
bool pare (int a){
 while(a){
        if(a%2==0)
        return true;
 a=a/10;}
 return false;}
 int main (){
     cin >>n;
     for(int i=1;i<=n;i++)
        cin>>a[i];
     for(int i=1;i<=n;i++)
        cout<< a[i]<<" ";
     int x=0;
     for(int i=1;i<=n;i++)
        if(pare(a[i])==true && pare(a[i]/10)== false )
        x++;
     cout<<x;
     return 0;}
