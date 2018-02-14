#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, k, l ,t, sum=0;
    cin >> n >> k;
    vector<int> arr;
    for(int i=0; i<n; i++)
    {
        cin >> l >> t;
        if(t == 0)
            sum += l;
        else
            arr.push_back(l);
    }
    sort(arr.begin(), arr.end());
    int len = arr.size();
    for(int i=len-1; i>=0; i--)
    {
        if(k>0){
            sum += arr[i];
            k--;
        }
        else{
            sum -= arr[i];
        }
    }
    cout << sum;
    return 0;
}