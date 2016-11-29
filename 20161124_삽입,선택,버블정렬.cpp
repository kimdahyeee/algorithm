#include <iostream>
using namespace std;
int select_min;
int temp;

//선택정렬
void select_sort(int select[9]) {
	for (int i = 0; i < 8; i++) {
		select_min = i;
		for (int j = i+1; j < 9; j++) {
			if (select[select_min] > select[j]) {
				select_min = j;
			}
		}
		temp = select[i];
		select[i] = select[select_min];
		select[select_min] = temp;
	}
	for (int i = 0; i < 9; i++) {
		cout << select[i] << " ";
	}
}

//삽입정렬
void insert_sort(int insert[9]) {
	int j;
	for (int i = 1; i <= 9; i++) {
		j = i - 1;
		while ((j-- >= 0) && (insert[j] > insert[j + 1])) {
			temp = insert[j + 1];
			insert[j + 1] = insert[j];
			insert[j] = temp;
		}
	}
	for (int i = 0; i < 9; i++) {
		cout << insert[i] << " ";
	}
}

//버블정렬
void bubble_sort(int bubble[9]) {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 9 - i; j++) {
			if (bubble[j - 1] > bubble[j]) {
				temp = bubble[j - 1];
				bubble[j - 1] = bubble[j];
				bubble[j] = temp;
			}
		}
	}
	for (int i = 0; i < 9; i++) {
		cout << bubble[i] << " ";
	}
}

int main() {
	int a[9] = { 9,2,6,5,1,4,8,3,7 };

	cout << "select_sort 결과 : ";
	select_sort(a);
	cout<< endl;

	cout << "insert_sort 결과 : ";
	insert_sort(a);
	cout << endl;

	cout << "bubble_sort 결과 : ";
	bubble_sort(a);
	cout << endl;
	
}