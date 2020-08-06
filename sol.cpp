#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	int t;
	cin >> t;
	while(t--) {
		int a[100], k, n;
		cin >> n >> k;
		for(int i=0; i<n; ++i)
			cin >> a[i];
		sort(a, a+n);
		for(int i=n; i<k; ++i)
			a[i]=0;
		cout << a[(n+k)/2] << "\n";
	}
}
