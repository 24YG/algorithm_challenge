#include <iostream>
#include <algorithm>

// ����� ���ڿ�
/*
* ù° �ٿ� ���ڿ� S�� �־�����. S�� ���̴� �ִ� 10�̰�, ���ĺ� �ҹ��ڷθ� �̷���� �ִ�.
* ù° �ٿ� ��ġ�� ���ġ�ؼ� ���� ���� �ٸ� ����� ���ڿ��� ������ ����Ѵ�.
*/

using namespace std;

int alphabet[27];
int result;

void solution(int idx, string tmp, const string& str)
{
	if (idx == str.size()) {
		result++;
		return;
	}

	for (int i = 0; i < 26; ++i) {
		if (alphabet[i] == 0) continue;	// �Է� ���� ���� ���ĺ�����
		if (tmp != "" && tmp[tmp.size() - 1] == static_cast<char>('a' + i)) continue; // ���� �Ͱ� ������
		alphabet[i]--;
		solution(idx + 1, tmp + static_cast<char>('a' + i), str);
		alphabet[i]++;
	}
}


int main()
{
	string str;
	cin >> str;

	for (int i = 0; i < str.size(); ++i) {
		alphabet[str[i] - 'a']++;	// �ҹ��ڸ� �Է�
	}

	solution(0, "", str);

	cout << result << endl;
}