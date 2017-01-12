#include <iostream>
#include<vector>
using namespace std;
int input[50]; //입력값 저장, 부모 노드를 알기 위해
vector<int> tr[50];//노드 연결 저장
vector<int> root; //루트 노드가 여러개인 경우를 대비해 따로 저장.
int cnt, del; //cnt:리프노드의 개수, del : 삭제 노드 번호

void FuncCnt(int s) {
	if (tr[s].size() > 0) {
		for (int i = 0; i < tr[s].size(); i++) {
			if (tr[s][i] != del) {
				FuncCnt(tr[s][i]); //재귀 이용
			}
			else {
				if (tr[s].size() == 1) cnt++; //삭제된 노드이면서, 부모노드의 단하나의 자식인 경우, 부모노드가 리프노드가 된다.
			}
		}
	}
	else {
		cnt++; //자식이 없는 노드는 리프노드이다.
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