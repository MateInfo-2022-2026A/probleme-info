#include<iostream>
using namespace std;
int a[100], n, b[100], m, c[100], k, x[100], t=0;
void citire(int a[100], int n){
    for(int i=1; i<=n; i++)
        cin>>a[i];
}
void afisare(int a[100], int n){
    for(int i=1; i<=n; i++)
        cout<<a[i]<<' ';
        cout<<endl;
}
void ordonare(int a[100], int n){
    int ord=0;
    while(ord==0){
        ord=1;
        for(int i=1; i<n; i++)
        if(a[i]>a[i+1]){
            swap(a[i], a[i+1]);
            ord=0;
        }
    }
}
void douasiruri(int a[100], int n, int sa, int b[100], int m, int sb, int x[100], int &k){
    if(sa<=n && sb<=m){
    while(sa<=n && sb<=m){
        if(a[sa]<b[sb])
            x[++k]=a[sa++];
        else
            x[++k]=b[sb++];}
    while(sa<=n)
        x[++k]=a[sa++];
    while(sb<=m)
        x[++k]=b[sb++];}
}
void interclasare(int a[100], int n, int b[100], int m, int c[100], int k, int x[100], int &t){
    t=0;
    int i=1, j=1, l=1;
    while(i<=n && j<=m && l<=k){
        if(a[i]<=b[j] && a[i]<=c[l])
            x[++t]=a[i++];
        else
            if(b[j]<=a[i] && b[j]<=c[l])
                x[++t]=b[j++];
            else
                x[++t]=c[l++];}
    douasiruri(a, n, i, b, m, j, x, t);
    douasiruri(a, n, i, c, k, l, x, t);
    douasiruri(b, m, j, c, k, l, x, t);
    }

int main(){
    cin>>n;
    citire(a,n);
    cin>>m;
    citire(b,m);
    cin>>k;
    citire(c,k);

    ordonare(a,n);
    ordonare(b,m);
    ordonare(c,k);

    afisare(a,n);
    afisare(b,m);
    afisare(c,k);

    interclasare(a, n, b, m, c, k, x, t);
    afisare(x, t);

    return 0;
}
