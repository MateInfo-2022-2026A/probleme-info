#include <iostream>
#include <fstream>
using namespace std;
ifstream fi("numere.txt");
int a=101, b=100, x;
int main (){
while(fi>>x){
if(x/100==0 && x/10 !=0)
if(x<b)
a=b,b=x;
else
if(x<a)
a=x;
}
if(a==101)
cout<<"nu exista niciunul";
else
if(a==100)
cout<<b;
else
cout<<b<<" "<<a;
return 0;

}

