#include <iostream>

typedef struct _object {
	int a;	//����
	int b;	//����
}Object;
Object ob[100];

int main()
{
	int x;	//�� �ݾ�
	int n;	//������ ��
	int sum = 0;

	std::cin >> x;
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::cin >> ob[i].a >> ob[i].b;
		sum += ob[i].a * ob[i].b;
	}

	if (sum == x) {
		std::cout << "Yes" << std::endl;
	}
	else
		std::cout << "No" << std::endl;


	return 0;
}