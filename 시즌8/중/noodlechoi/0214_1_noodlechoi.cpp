#include <iostream>
// �Ǻ���ġ �Լ�
/*
* ����
1�� 2�� ��µǰ�, 0�� 1�� ��µȴ�. 
N�� �־����� ��, fibonacci(N)�� ȣ������ ��,
0�� 1�� ���� �� �� ��µǴ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/

using namespace std;

int main()
{
	int T, N;
	int cnt[41]{ 0, 1 };
	for (int i = 2; i < 41; ++i) {
		cnt[i] = cnt[i - 1] + cnt[i - 2];
	}

	cin >> T;
	for (int i = 0; i < T; ++i) {
		cin >> N;

		if (N == 0) cout << "1 0" << endl;
		else if (N == 1) cout << "0 1" << endl;
		else cout << cnt[N - 1] << " " << cnt[N] << endl;
	}

}