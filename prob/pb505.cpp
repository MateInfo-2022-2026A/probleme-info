#include <iostream>
using namespace std;
float a[100];
int n;
void ordonare(float a[100],int n){
int ord=0;
while(ord==0){
ord=1;
for(int i=1; i<=n-1; i++)
if(a[i]>a[i+1]){
swap(a[i],a[i+1]);
ord=0;}
}
}
int main (){
int m;
cin>>n>>m;
for(int i=1; i<=n;i++)
cin>>a[i];
ordonare(a,n);
for(int i=n-m+1; i<=n; i++)
cout<<a[i]<<" ";
cout<<endl;
for(int i=m; i>=1; i--)
cout<<a[i]<<" ";
cout<<endl;
return 0;
}
