#include<iostream>
#include<string.h>
using namespace std;

bool friends[10][10];
int n;

int countFriends(bool pairs[10]) {
	int target = -1;
	for (int i = 0; i < n; i++) {
		if (!pairs[i]) {
			target = i;
			break;
		}
	}

	if (target == -1) return 1;
	int result = 0;

	for (int i = target + 1; i < n; i++) {
		if (!pairs[i] && friends[target][i]) {
			pairs[i] = pairs[target] = true;
			result += countFriends(pairs);
			pairs[i] = pairs[target] = false;
		}
	}

	return result;
}

int main() {
	int c, m, one, two;
	
	cin >> c;
	while (c--) {
		cin >> n;
		cin >> m;
		while (m--) {
			cin >> one >> two;
			friends[one][two] = friends[two][one] = true;
		}
		bool pair[10] = {};
		cout << countFriends(pair)<<endl;
		friends[10][10] = {false, };
		for (int i = 0; i < 10; i++) {
			memset(friends[i], 0, sizeof(bool) * 10);
		}
	}
}