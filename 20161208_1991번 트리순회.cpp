#include <iostream>
using namespace std;
char tree[27][3];

void preorder(int left, int right) {
	if(tree[left][right] != '.') {
		cout<< tree[left][right];
		preorder(tree[left][right]-65, 1);
		preorder(tree[left][right] - 65, 2);
	}
}

void inorder(int left, int right) {
	if(tree[left][right] != '.') {
		inorder(tree[left][right] - 65, 1);
		cout << tree[left][right];
		inorder(tree[left][right] - 65, 2);
	}
}

void postorder(int left, int right) {
	if (tree[left][right] != '.') {
		postorder(tree[left][right] - 65, 1);
		postorder(tree[left][right] - 65, 2);
		cout<< tree[left][right];
	}
}

int main() {
	int num;
	char node;
	cin >> num;
	int a;
	while (num--)
	{
		cin >> node;
		a = node - 65;
		tree[a][0] = node;
		cin >> node;
		tree[a][1] = node;
		cin >> node;
		tree[a][2] = node;
	}

	preorder(0, 0);
	cout << endl;
	inorder(0, 0);
	cout << endl;
	postorder(0, 0);
}