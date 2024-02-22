#include <iostream>
#include <vector>
#include <algorithm>

// ��
/*
* �����̴� �ױ����� ���Ѵ�. �׸��� ȭ���� �迡 �Ǿ�� �Ѵ�. ��� ȭ���� �ڽ��� �ȿ� �־��� �ִ�. �ױ����� ũ������ N�� �ְ�, 1�п� �ڽ��� �ϳ��� �迡 ���� �� �ִ�. ��� ũ������ ���ÿ� �����δ�.

�� ũ������ ���� ������ �ִ�. �� ���� ���Ѻ��� ���ſ� �ڽ��� ũ�������� ������ �� ����. ��� �ڽ��� ��� �ű�µ� ��� �ð��� �ּڰ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/

using namespace std;

int main() {
    int N, M;
    vector<int> crane;
    vector<int> box;

    // �Է�
    cin >> N;
    for (int i = 0; i < N; i++) {
        int n;
        cin >> n;
        crane.push_back(n);
    }
    cin >> M;
    for (int i = 0; i < M; i++) {
        int m;
        cin >> m;
        box.push_back(m);
    }

    // ����
    sort(crane.begin(), crane.end());
    sort(box.begin(), box.end());

    // �Ұ����� ���
    if (crane.back() < box.back()) {
        cout << -1;
        return 0;
    }

    int cnt = 0;
    while (!box.empty()) {
        cnt++;
        for (int i = crane.size() - 1; i >= 0; i--) {   // ���� ū ���Ժ���
            for (int j = box.size() - 1; j >= 0; j--) { // ���� ū ���Ժ���
                if (crane[i] >= box[j]) {               // �ű� �� ������ ����
                    box.erase(box.begin() + j);
                    break;
                }
            }
        }
    }

    cout << cnt << endl;
}
