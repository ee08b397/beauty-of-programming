// Dos\Windows, ANSI
// 快速找出故障机器
// 所有机器都有俩备份，现在坏了两台不同的，请把那两台给找出来
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
	int res1, res2;
	
	while (scanf("%d", &n) == 1 && n > 0) {
		for (i = 0; i < n; ++i) {
			scanf("%d", &tmp);
			v.push_back(tmp);
		}
		
		res = 0;
		for (i = 0; i < n; ++i) {
			res ^= v[i];
		}
		// 取lowbit作为判别位
		res = (res & (-res));
		
		res1 = res2 = 0;
		for (i = 0; i < n; ++i) {
			if (v[i] & res) {
				res1 ^= v[i];
			} else {
				res2 ^= v[i];
			}
		}
		v.clear();
		printf("%d %d\n", res1, res2);
	}
	
	return 0;
}