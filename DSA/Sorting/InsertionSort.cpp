#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define fi first
#define se second
#define pii pair<int,int>
#define swap(x, y) {int tmp = x; x = y; y = tmp;}

void input(int *a, int *n){
    cin >> *n;
    for(int i = 1; i <= *n; ++i)
        cin >> a[i];
}

void insertionSort(int *a, int n){
    for(int i = 1; i <= n; ++i){
        cout << "Buoc " << i-1 << ": ";
        int j = i-1;
        while(j != 0 && a[j] > a[j+1]){
            swap(a[j], a[j+1]);
            j--;
        }
        for(j = 1; j <= i; ++j)
            cout << a[j] << " ";
        cout << "\n";
    }
}

int n, a[1111];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //fast_io
    input(a, &n);
    insertionSort(a, n);
}