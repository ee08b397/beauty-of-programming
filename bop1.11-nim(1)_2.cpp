// Dos\Windows, ANSI
// NIM(1) - ��ʯͷ����Ϸ
// N��ʯͷ��һ�ţ�ÿ��ȡһ���������ڵ�������ȡ�����һ�ŵ����䣬˭��Ӯ��
#include <cstdio>
using namespace std;

int main()
{
	int n;
	
	while (scanf("%d", &n) == 1 && n > 0) {
		if (n % 3 == 1) {
			printf("Offensive wins.\n");
		} else {
			printf("Defensive wins.\n");
		}
	}
	
	return 0;
}