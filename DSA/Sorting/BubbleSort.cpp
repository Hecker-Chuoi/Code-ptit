#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define fi first
#define se second
#define pii pair<int,int>
#define swap(x, y) {int tmp = x; x = y; y = tmp;}

void bubbleSort(int *arr, int n){
    int step = 1;
    for(int i = 1; i < n; ++i){
        bool check = false;
        for(int j = 1; j < n; ++j){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                check = true;
            }
        }
        if(!check) break;
        cout << "Buoc " << step << ": ";
        for(int i = 1; i <= n; ++i)
            cout << arr[i] << " ";
        cout << "\n";
        step++;
    }
}

int n, a[1111];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //fast_io
    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];

    bubbleSort(a, n);
}