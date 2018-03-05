//题目：n个恶龙每个x个头，m个骑士能砍掉不超过x个头的恶龙，使用最小花费除掉所有恶龙
//思路分析：将恶龙与骑士从小到大排序，将骑士依次与恶龙进行比较（如果连当前最小的恶龙他都没办法斩首，便舍弃）
#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn=20000;
int A[maxn],B[maxn];
int main(){
	int n,m;
	while(scanf("%d%d",&n,&m)==2&&n&&m){
		for(int i=0;i<n;i++) scanf("%d",&A[i]);
		for(int i=0;i<m;i++) scanf("%d",&B[i]);
		sort(A,A+n);
		sort(B,B+m);
		int cur=0;//当前需要砍头的编号
		int cost=0;//当前总费用
		for(int i=0;i<m;i++)
			if(B[i]>=A[cur]){
				cost+=B[i];
				if(++cur==n)break;
			}
		if(cur<n) printf("Loowater is doomed\n");
		else printf("%d\n",cost);
			   }
	return 0;
			   }

//学习总结：1.c++中的sort函数有三个参数，第一个为起始地址，第二个为终止地址，第三个为排序规则(从小到大，从大到小


