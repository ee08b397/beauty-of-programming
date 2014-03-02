// Dos\Windows, ANSI
// С�ɵĵ��ݵ����㷨
// N���������ݣ��ٶ�����ֻͣ��ĳһ�㣬Ȼ���ҳ�����¥�ݣ�ͣ���Ĳ�������¥������
// ����Ĭ�����ź��򣬾���û������Ͱ����Ҳ����O(n)�������Ϊ����¥�㲻����̫�࣬����ͰҲ����
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