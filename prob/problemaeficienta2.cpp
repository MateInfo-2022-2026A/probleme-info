#include <iostream>
#include <fstream>
using namespace std;
ofstream fo("BAC.TXT");
int main(){
int a[100],b[100],n,m,i=1,j=1,ultim;
cin>>n;
for(int i=1;i<=n;i++)
cin>>a[i];
cin>>m;
for(int i=1;i<=m;i++)
cin>>b[i];
if(a[1]<b[1]){
    fo<<a[1]<<" ";
ultim=a[1];
i++;}
else{
    fo<<b[1]<<" ";
    ultim=b[1];
    j++;
}
while(i<=n && j<=m){
    if(a[i]<b[j]&& a[i]%2!=ultim%2 && a[i]>ultim){
        fo<<a[i]<<" ";
        ultim=a[i];
        i++;
    }
    else
    if(a[i]>b[j]&& b[j]%2!=ultim%2 && b[j]>ultim){
        fo<<b[j]<<" ";
        ultim=b[j];
        j++;
    }
    else
        if(a[i]>b[j]){
                if(a[i]>ultim && a[i]%2 != ultim%2){
        fo<<a[i]<<" ";
    ultim=a[i];
    j++;
    i++;}
    else
        j++;
        }
    else{
        if(b[j]>ultim && b[j]%2 !=ultim%2){

    fo<<b[j]<<" ";
    ultim=b[j];
    j++;
    i++;}
    else
        i++;
    }
}
    if(i<=n&&a[i]%2 != ultim%2 && a[i]>ultim)
        fo<<a[i];
    else
    if(j<=m&&b[j]%2 != ultim%2 && b[j]>ultim)
        fo<<b[j];
    fo.close();
    return 0;
    }



