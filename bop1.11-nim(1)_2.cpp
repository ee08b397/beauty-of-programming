// Dos\Windows, ANSI
// NIM(1) - 排石头的游戏
// N个石头排一排，每次取一个或者相邻的两个，取完最后一颗的人输，谁能赢？
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