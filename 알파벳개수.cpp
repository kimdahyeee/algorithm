#include<iostream>
#include<string>
using namespace std;

int main() {

	string s;
	cin >> s;
	int f[26] = { 0 }; //ºóµµ¼ö

	for (int i = 0; i < s.size(); i++) {
		int a = s[i] - 'a';
		f[a]++;
	}

	for (int i = 0; i < 26; i++) {
		cout << f[i] << " ";
	}
	return 0;
}
