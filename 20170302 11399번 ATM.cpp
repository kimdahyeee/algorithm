#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int n, p[1001], num, sum = 0;
	cin >> n;
	for (int i = 0; i<n; i++) {
		cin >> p[i];
	}
	sort(p, p + n);
	for (int i = 0; i<n; i++) {
		sum += p[i] * (n - i);
	}
	cout << sum;
}