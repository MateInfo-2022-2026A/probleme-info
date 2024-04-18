#include <iostream>
#include <fstream>
using namespace std;
ofstream fo("BAC2.TXT");
int a[10000]={0}, n, m, x, Min=10001;
int main(){
cin>>n;
for(int i=1; i<=n; i++){
    cin>>x;
a[x]=1;
if(x<Min)
    Min=x;
}
cin>>m;
for (int i=1; i<=m; i++){
    cin>>x;
    a[x]=1;
if(x<Min)
    Min=x;
}
fo<<Min<< " ";
int ultim=Min;
for(int i=ultim+1; i<=9999; i++)
    if(a[i]==1 && i%2!=ultim%2){
        fo<<i<< " ";
        ultim=i;
}

return 0;}
