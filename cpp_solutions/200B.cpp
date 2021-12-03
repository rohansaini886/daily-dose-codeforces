#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
    int a[n];
    double sum = 0.00000000, ans = 0.00000000;
    for(int i = 0; i < n ; i++){
        cin >> a[i];
        sum += a[i];
        }
    ans = sum / n;
    cout << ans;
	return 0;
}
