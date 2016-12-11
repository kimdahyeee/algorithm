#include <iostream>
#include <vector>
using namespace std;

vector<int> v;
int num;
int result;

int func(int n) {
	v.push_back(0);
	v.push_back(0);
	for (int i = 2; i <= n; i++) {
		v.push_back(v[i-1] + 1);
		if (i % 3 == 0 && v[i / 3] + 1 < v[i]) {
			v[i] = v[i / 3] + 1;
		}
		else if (i % 2 == 0 && v[i / 2] + 1 < v[i]) {
			v[i] = v[i / 2] + 1;
		}
		
	}

	return v[n];
}

int main() {
	cin >> num;
	cout<<func(num);
}