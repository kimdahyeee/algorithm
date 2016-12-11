//배열 이용
#include <iostream>
using namespace std;
int arr[1000001];
int num;
int result;

int func(int n) {
	if (n == 1) { arr[n] = 0; }
	else{
		for (int i = 2; i <= n; i++) {
			arr[i] = arr[i - 1] + 1;
			if (i % 3 == 0 && arr[i / 3] + 1 < arr[i]) {
				arr[i] = arr[i / 3] + 1;
			}
			else if (i % 2 == 0 && arr[i / 2] + 1 < arr[i]) {
				arr[i] = arr[i / 2] + 1;
			}

		}
	}

	return arr[n];
}

int main() {
	cin >> num;
	cout << func(num);
}