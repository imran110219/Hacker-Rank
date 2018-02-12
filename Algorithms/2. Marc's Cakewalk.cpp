#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> calories(n);
    for(int calories_i = 0; calories_i < n; calories_i++){
       cin >> calories[calories_i];
    }
    long long sum = 0;
    sort (calories.begin(), calories.begin()+n);
    for(int i = 0, j=n-1; i < n, j>=0; i++, j--){
       sum += calories[j] * pow(2, i);
    }
    cout << sum;
    return 0;
}