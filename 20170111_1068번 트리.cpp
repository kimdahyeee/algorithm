#include <iostream>
#include<vector>
using namespace std;
int input[50]; //�Է°� ����, �θ� ��带 �˱� ����
vector<int> tr[50];//��� ���� ����
vector<int> root; //��Ʈ ��尡 �������� ��츦 ����� ���� ����.
int cnt, del; //cnt:��������� ����, del : ���� ��� ��ȣ

void FuncCnt(int s) {
	if (tr[s].size() > 0) {
		for (int i = 0; i < tr[s].size(); i++) {
			if (tr[s][i] != del) {
				FuncCnt(tr[s][i]); //��� �̿�
			}
			else {
				if (tr[s].size() == 1) cnt++; //������ ����̸鼭, �θ����� ���ϳ��� �ڽ��� ���, �θ��尡 ������尡 �ȴ�.
			}
		}
	}
	else {
		cnt++; //�ڽ��� ���� ���� ��������̴�.
	}
}

int main() {
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> input[i];
		if (input[i] != -1) {
			tr[input[i]].push_back(i);
		}
		else {
			root.push_back(i);
		}
	}
	cin >> del;

	for (int i = 0; i < root.size(); i++) {
		if (del != root[i]) {
			FuncCnt(root[i]);
		}
	}
	

	cout << cnt;
}