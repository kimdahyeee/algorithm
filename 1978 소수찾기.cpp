#include <iostream>
#include <vector>
using namespace std;

int input, a, output;
vector<int> v;


bool prime(int t) {
	if (t < 2) {
		return false;
	}
	else {
		for (int j = 2; j <= t / 2; j++) {
			if (t%j == 0) {
				return false;
			}
		}
		return true;
	}

	
}
int main() {
	cin >> input;
	for (int i = 0; i < input; i++) {
		cin >> a;
		v.push_back(a);
	}

	for (int i = 0; i < (int)v.size(); i++) {
		if (prime(v[i])) {
			output++;
		}
	}

	cout<< output;

}