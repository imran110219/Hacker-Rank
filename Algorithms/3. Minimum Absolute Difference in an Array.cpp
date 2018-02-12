#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    sort(a.begin(), a.end());
    int minimum = abs(a[0]-a[1]);
    for(int i=1; i<n-1; i++)
    {
        if(abs(a[i]-a[i+1]) < minimum)
            minimum = abs(a[i]-a[i+1]);
    }
    cout << minimum;
    return 0;
}