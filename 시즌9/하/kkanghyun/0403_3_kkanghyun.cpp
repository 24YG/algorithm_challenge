#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	
	// ���带 �����ϰ� ĭ���� ���û��� ����
	vector<int> board;
	board.reserve(N);
	for (int i = 0; i < N; ++i) {
		int X;
		cin >> X;
		board.push_back(X);
	}

	int pos{};	// 0 : 1�� ĭ
	for (int i = 0; i < M; ++i) {
		int j;
		cin >> j;
		pos += j;
		// N�� ĭ ���� �Ǵ� �� �̻��̶�� ���� �ֻ��� Ƚ�� �����ϰ� break
		if (pos >= N - 1) {
			N = i + 1;
			break;
		}

		pos += board[pos];

		// N�� ĭ ���� �Ǵ� �� �̻��̶�� ���� �ֻ��� Ƚ�� �����ϰ� break
		if (pos >= N - 1) {
			N = i + 1;
			break;
		}
	}

	cout << N << endl;
}