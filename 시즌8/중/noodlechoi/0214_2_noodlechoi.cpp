#include <iostream>
// ���ڿ�
/*
�� ���ڿ� A�� B�� �־�����. �̶�, A�� ���̴� B�� ���̺��� �۰ų� ����. ���� A�� ���̰� B�� ���̿� ������ �� ���� ������ ���� ������ �� �� �ִ�.

A�� �տ� �ƹ� ���ĺ��̳� �߰��Ѵ�.
A�� �ڿ� �ƹ� ���ĺ��̳� �߰��Ѵ�.
�̶�, A�� B�� ���̰� �����鼭, A�� B�� ���̸� �ּҷ� �ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/

using namespace std;

int GetDiff(const string& x, const string& y)
{
	int mini = 100; // A�� B�� ���̴� �ִ� 50
	for (int i = 0; i < y.size(); ++i) {
		if (i + x.size() > y.size()) break;

		int diff = 0;
		for (int j = 0; j < x.size(); ++j) {
			if (x[j] != y[i + j]) diff++;
		}
		mini = min(diff, mini);
	}

	return mini;
}

int main()
{
	string X, Y;
	cin >> X >> Y;
	cout << GetDiff(X, Y) << endl;
}