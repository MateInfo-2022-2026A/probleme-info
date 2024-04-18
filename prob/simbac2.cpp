#include<iostream>
#include<fstream>
using namespace std;
ifstream fi("bac.in");
int main(){
int a[1001]={0},n=0,x;
while(fi>>x){
    a[x]++;
    if(x>n)
        n=x;
}
int b=1;
for(int i=1;i<=n && b==1;i++)
    if((a[i]>i || a[i]%2!=i%2)&& a[i])
        b=0;
if(b==1)
    cout<<"DA";
    else
    cout<<"NU";
return 0;
}
