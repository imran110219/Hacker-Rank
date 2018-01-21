#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    double sum=0, res=0;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sum /= n;
    for(int i=0; i<n; i++)
    {
        res += ((sum-a[i])*(sum-a[i]));
    }
    res /= n;
    res = sqrt(res);
    printf("%.1f", res);
    return 0;
}
