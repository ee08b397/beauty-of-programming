// Dos\Windows, ANSI
// NIM(1) - ��ʯͷ����Ϸ
// N��ʯͷ��һ�ţ�ÿ��ȡ1~k��ʯͷ��ȡ�����һ�ŵ����䣬˭��Ӯ��
#include <cstdio>
using namespace std;

int main()
{
	int n, k;
	
	while (scanf("%d%d", &n, &k) == 2 && n > 0 && k > 0) {
		if (n % (k + 1) != 1) {
			printf("Offensive wins.\n");
		} else {
			printf("Defensive wins.\n");
		}
	}
	
	return 0;
}