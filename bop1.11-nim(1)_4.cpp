// Dos\Windows, ANSI
// NIM(1) - 排石头的游戏
// N个石头排一排，每次取1~k个石头，取完最后一颗的人输，谁能赢？
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