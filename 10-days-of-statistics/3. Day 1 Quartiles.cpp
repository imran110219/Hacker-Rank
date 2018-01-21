#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q1, q2, q3;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    sort(a, a+n);

    if(n%2 == 0)
    {
        q2 = (a[n/2] + a[n/2-1])/2;
        if((n/2)%2 == 0)
        {
            q1 = (a[n/4] + a[n/4-1])/2;
            q3 = (a[n/4+n/2] + a[n/4-1+n/2])/2;
        }
        else
        {
            q1 = a[n/4];
            q3 = a[(n+n/2)/2];
        }
    }
    else
    {
        q2 = a[n/2];
        if((n/2)%2 == 0)
        {
            q1 = (a[n/4] + a[n/4-1])/2;
            q3 = (a[n/4+n/2] + a[n/4+1+n/2])/2;
        }
        else
        {
            q1 = a[n/4];
            q3 = a[(n+n/2)/2];
        }
    }

    cout << q1 << "\n" << q2 << "\n" << q3;
    return 0;
}
