#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    double w[n], x[n], sum, div, res;
    for(int i=0; i<n; i++){
        cin >> x[i];
    }
    for(int i=0; i<n; i++){
        cin >> w[i];
        sum += (x[i]*w[i]);
        div += w[i];
    }
    printf("%.1f", sum/div);
    return 0;
}
