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

void selectionSort(int *a, int n){
    for(int i = 1; i < n; ++i){
        cout << "Buoc " << i << ": ";
        int minIndex = i;
        for(int j = i+1; j <= n; ++j){
            if(a[j] < a[minIndex])
                minIndex = j;
        }
        swap(a[i], a[minIndex]);

        for(int j = 1; j <= n; ++j)
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
    selectionSort(a, n);
}