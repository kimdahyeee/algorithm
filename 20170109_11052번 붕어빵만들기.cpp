#include <iostream>
#include <algorithm>
using namespace std;
int p[10000], s[10000];

int main() {
	int n, result;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> p[i];
	}

	for (int i = 1; i <= n; i++) {
		s[i] = p[i];
		for (int j = 1; j <= i/2; j++) {
			s[i] = max(s[j]+s[i-j], s[i]);
		}
	}
	
	cout << s[n];
}