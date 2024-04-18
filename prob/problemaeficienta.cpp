#include<iostream>
#include<fstream>
using namespace std;
ifstream fi("BAC.TXT");
int main(){
int n=1,a,x,b;
fi>>a;
while(fi>>b){
    if(a==b)
        n++;
    else{
        cout<<a<<" "<<n<<" ";
        n=1;}
    a=b;}
cout<<a<<" "<<n;
return 0;}
