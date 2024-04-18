#include<iostream>
using namespace std;

int a[100], n,b[100], m, c[100], k, d[100], l=0, e[100], o=0;

void citire(int a[100], int n){
    for(int i = 1; i <= n; i++){
        cin>>a[i];
    }
}

void afisare(int a[100], int n){
    for(int i = 1; i <= n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void ordonare(int a[100], int n){
    for(int i = 1; i <= n-1; i++)
        for(int j = i+1; j<=n; j++)
            if(a[j] < a[i])
                swap(a[j], a[i]);
}

void interclasare(int a[100], int n, int b[100], int m, int c[100], int &k){
    k=0;
    int i = 1, j = 1;
    while(i <= n && j <= m){
        if(a[i] < b[j]){
            c[++k] = a[i];
            i++;
        } else {
            c[++k] = b[j];
            j++;
        }
    }
    while(i<=n){
        c[++k] = a[i];
        i++;
    }
    while(j<=m){
        c[++k] = b[j];
        j++;
    }
}

int main() {

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

    interclasare(a,n,b,m,d,l);
    interclasare(d,l,c,k,e,o);

    afisare(e,o);

    return 0;
}

