// Dos\Windows, ANSI
// �����ҳ����ϻ���
// ���л������������ݣ����ڻ���һ̨�������̨���ҳ���
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