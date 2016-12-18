#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <memory.h>
using namespace std;

vector<int> vec[1001];
bool check[1001];

void dfs(int vertex) {
	cout << vertex <<" ";
	check[vertex] = true;
	for (int i = 0; i < vec[vertex].size(); i++) {
		if (check[vec[vertex][i]] != true) {
			dfs(vec[vertex][i]);
		}
	}
}

void bfs(int vertex) {
	queue<int> q;
	q.push(vertex);
	check[vertex] = true;
	while (!q.empty()) {
		int front = q.front();
		for (int i = 0; i < vec[front].size(); i++) {
			if (check[vec[front][i]] != true) {
				q.push(vec[front][i]);
				check[vec[front][i]] = true;
			}
		}
		cout << front << " ";
		q.pop();
	}
}

int main() {
	
	int n, m, v;
	int first, last;
	cin >> n >> m >> v;
	while (m--) {
		cin >> first >> last;
		vec[first].push_back(last);
		vec[last].push_back(first);
	}

	for (int i = 0; i < n; i++) {
		sort(vec[i].begin(), vec[i].end());
	}

	dfs(v);
	memset(check, false, sizeof(check));
	cout << endl;
	bfs(v);
}