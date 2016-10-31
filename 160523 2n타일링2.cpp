#include <iostream>
#include <vector>
using namespace std;

vector<int> v;
int main() {

	int a;
	cin >> a;
	v.push_back(1);
	v.push_back(3);
	if (a >= 3) {
		for (int i = 3; i <= a; i++) {
			v.push_back((v[i - 2] + 2 * v[i - 3]) % 10007);
		}
	}
	cout << v[a - 1];

}
