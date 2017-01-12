#include<cstdio>
#include<algorithm>
using namespace std;

long long int a[5000001];

int main() {
	long long int n, k;
	scanf_s("%d", &n);
	scanf_s("%d", &k);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &a[i]);
	}

	nth_element(a, a + k-1, a + n);
	printf_s("%lld", a[k - 1]);

	return 0;
}