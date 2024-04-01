#include <iostream>
#include <vector>

// Ʈ��
/*
Ʈ���� �־����� ��, ��� �ϳ��� ���� ���̴�. �� ��, ���� Ʈ������ ���� ����� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�. ��带 ����� �� ���� ����� ��� �ڼ��� Ʈ������ ���ŵȴ�.
*/

using namespace std;

vector<int> nodes[51];
int k;

int dfs(const int& node, int& leaf) {
	if (node == k) return -1;
	if (!nodes[node].size()) {
		leaf++;
		return 0;
	}
	for (int i = 0; i < nodes[node].size(); i++) {
		int tmp = dfs(nodes[node][i], leaf);
		if (tmp == -1 && nodes[node].size() == 1)
			leaf++;
	}

	return 0;
}

int solution(const int& root) {
	int leaf = 0;

	dfs(root, leaf);
	return leaf;
}

int main()
{
	int N;
	cin >> N;

	// �Է�
	int root = 0;
	for (int i = 0; i < N; ++i) {
		int n;
		cin >> n;
		if (n == -1)
			root = i;
		else
			nodes[n].push_back(i);
	}

	cin >> k;
	cout << solution(root) << endl;
}