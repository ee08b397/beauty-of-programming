// Dos\Windows, ANSI
// 找出将帅不冲突的位置
#include <cstdio>
using namespace std;

/*
	012
	345
	678
*/
int main()
{
	int n = 81;
	while (n--) {
		if (n / 9 % 3 == n % 9 % 3) {
			printf("(%d, %d)\n", n / 9 + 1, n % 9 + 1);
		}
	}
	
	return 0;
}