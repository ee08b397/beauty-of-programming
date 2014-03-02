// Dos\Windows, ANSI
// 快速找出故障机器
// 所有机器都有俩备份，现在坏了一台，请把那台给找出来
#include <cstdio>
#include <vector>
using namespace std;

int main()
{
	int n = 81;
	int tmp;
	vector<int> v;
	int i;
	int res;
	
	while (scanf("%d", &n) == 1 && n > 0) {
		for (i = 0; i < n; ++i) {
			scanf("%d", &tmp);
			v.push_back(tmp);
		}
		res = 0;
		for (i = 0; i < n; ++i) {
			res ^= v[i];
		}
		v.clear();
		printf("%d\n", res);
	}
	
	return 0;
}