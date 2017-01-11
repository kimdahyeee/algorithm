#include<cstdio>
#include<algorithm>
using namespace std;
int v[1000001];

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &v[i]);
	}

	sort(v, v + n);

	for (int i = 0; i < n; i++) {
		printf("%d\n", v[i]);
	}

	return 0;
}