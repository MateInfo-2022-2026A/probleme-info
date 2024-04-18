#include<iostream>
    using namespace std;
    void ordonare(int a[100], int n){
    int ord=0;
    while(ord==0){
            ord=1;
        for(int i=1;i<=n-1;i++)
        if(a[i]>a[i+1]){
            int z=a[i];
        a[i]=a[i+1];
        a[i+1]=z;
        ord=0;}
    }
    }
    void citire(int a[100], int n){
    for(int i=1;i<=n;i++)
        cin>>a[i];}

         void afisare(int a[100], int n){
    for(int i=1;i<=n;i++)
        cout<<a[i]<<" ";
        cout<<endl;}

        int main(){
        int a[100],b[100], c[100], n, m, k=0;
        cin>>n;
        cin>>m;
        citire(a,n);
        citire(b,m);
        ordonare(a,n);
        ordonare(b,m);
        afisare(a,n);
        afisare(b,m);
        int i=n, j=m;
        while(i>=1 && j>=1)
                if(a[i]>b[j])
                    c[++k]=a[i--];
                else
                    c[++k]=b[j--];
        while(i>=1)
        c[++k]=a[i--];
          while(j>=1)
            c[++k]=b[j--];
            afisare(c,k);
            return 0;}

























