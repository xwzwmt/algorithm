//题目：L厘米，n只蚂蚁，T秒后的位置。第一行输入3个整数，LTn,以下n行描述每只蚂蚁的位置
#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn=10000+5;

struct Ant{
int id;//顺序
int p;//位置
int d;//朝向
bool operator < (const Ant & a) const {
	return p<a.p;
	}
}
before[maxn],after[maxn];

const char dirName[][10]={"L","Turning","R"};
int order[maxn];//输入第i只小蚂蚁是终态的左数第i只

int main(){
	int k;
	scanf("%d",&k);
	for(int kcase=1;kcase<=k;kcase++){
		int L,T,n;
		printf("Case #%d:\n",kcase);
		scanf("%d%d%d",&L,&T,&n);
		for(int i=0;i<n;i++){
			int p,d;
			char c;
			scanf("%d %c",&p,&c);
			d=(c=='L'?-1:1);
			before[i]=(Ant){i,p,d};
			after[i]=(Ant){0,p+T*d,d};
		}
		//计算order数组
		sort(before,before+n);
		for(int i=0;i<n;i++)
			order[before[i].id]=i;
		//计算终态
		sort(after,after+n);
		for(int i=0;i<n;i++)
			if(after[i].p==after[i+1].p) after[i].d=after[i+1].d=0;
		//输出终态
		for(int i=0;i<n;i++){
			int a=order[i];
			if(after[a].p<0||after[a].p>L)printf("fell off\n");
			else printf("%d %s",after[a].p,dirName[after[a].d+1]);
		}
		printf("\n");
	}
	return 0;
}

//1.每只蚂蚁的相对位置不变2.两只蚂蚁相遇后可以看作两只蚂蚁交换

















