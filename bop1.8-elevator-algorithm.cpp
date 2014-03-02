// Dos\Windows, ANSI
// 小飞的电梯调度算法
// N个人坐电梯，假定电梯只停在某一层，然后大家出来爬楼梯，停在哪层大家爬的楼梯最少
// 数组默认已排好序，就算没排序，用桶排序也可以O(n)解决，因为电梯楼层不可能太多，所以桶也够用
#include <cstdio>
#include <vector>
using namespace std;

int main()
{
	int tmp;
	int i, n;
	int res, min_res;
	vector<int> v;
	
	while (scanf("%d", &n) == 1 && n > 0) {
		for (i = 0; i < n; ++i) {
			scanf("%d", &tmp);
			v.push_back(tmp);
		}
		
		res = 0;
		for (i = 1; i < n; ++i) {
			res += v[i] - v[0];
		}
		
		min_res = res;
		for (i = 1; i < n; ++i) {
			res += (2 * i - n) * (v[i] - v[i - 1]);
			if (res < min_res) {
				min_res = res;
			}
		}
		
		v.clear();
		printf("Elevator should stop at Floor %d.\n", n / 2);
		printf("Folks have to walk %d floors in total.\n", min_res);
	}
	
	return 0;
}