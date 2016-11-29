#include <iostream>
#include <vector>
using namespace std;
int temp;
int num, value;
vector<int> v;

//버블정렬
void bubble_sort(vector<int> vec) {
	for (int i = 0; i < vec.size() -1; i++) {
		for (int j = 1; j < vec.size() - i; j++) {
			if (vec[j - 1] > vec[j]) {
				temp = vec[j - 1];
				vec[j - 1] = vec[j];
				vec[j] = temp;
			}
		}
	}
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << endl;
	}
}

int main() {

	int num;
	cin >> num;
	while (num--) {
		cin >> value;
		v.push_back(value);
	}

	bubble_sort(v);
}