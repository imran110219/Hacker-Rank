#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    double mean, median, temp=0;
    cin >> n;
    double arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        temp += arr[i];
    }
    mean = temp/n;
    sort(arr, arr+n);
    if(n%2 == 0)
    {
        median = (arr[n/2]+arr[n/2-1])/2;
    }
    else
    {
        median = arr[n/2];
    }
    double maxValue = arr[0], maxCount = 0;
    for(int i=0; i<n-1; i++)
    {
        int counter = 0;
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
                ++counter;
        }
        if (counter > maxCount)
        {
            maxCount = counter;
            maxValue = arr[i];
        }
    }
    cout << mean << "\n" << median << "\n" << maxValue;
    return 0;
}
