#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, position;
	vector<int> v;
	cin >> n;
	v.push_back(1);
	for (int i = 2; i <= n; i++) {
		position =i-1; 
		while (position != 1) {
			swap(v[position - 1], v[position / 2 - 1]);
			position = position / 2;
		}
		v.push_back(i);
		swap(v.front(), v.back());
	}

	for (int i = 0; i < n; i++) {
		cout << v[i] <<" ";
	}
}