//��Ŀ��n������ÿ��x��ͷ��m����ʿ�ܿ���������x��ͷ�Ķ�����ʹ����С���ѳ������ж���
//˼·����������������ʿ��С�������򣬽���ʿ������������бȽϣ��������ǰ��С�Ķ�������û�취ն�ף���������
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
		int cur=0;//��ǰ��Ҫ��ͷ�ı��
		int cost=0;//��ǰ�ܷ���
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

//ѧϰ�ܽ᣺1.c++�е�sort������������������һ��Ϊ��ʼ��ַ���ڶ���Ϊ��ֹ��ַ��������Ϊ�������(��С���󣬴Ӵ�С


