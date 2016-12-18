#include <iostream>
using namespace std;
int order[1001];
bool check[1001];

int cycle_check(int num) {
	int start, end;
	int result = 0;
	for (int i = 0; i < num; i++) {
		if (check[i + 1] != true) {
			result++;
			start = i + 1;
			end = order[start];
			check[start] = true;
		}
		while (start != end) {
			check[end] = true;
			end = order[end];
		}		
	}

	return result;
}
int main() {
	int t, n;
	int vertex;
	
	cin >> t;
	while (t--) {
		cin >> n;
		for(int i=1; i<=n; i++){
			cin >> order[i];
			check[i] = false;
		}

		cout << cycle_check(n) << endl;
	}
}