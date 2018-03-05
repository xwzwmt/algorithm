//问题描述：n个部下，第i个部下需要Bi分钟交代任务,Ji分钟完成任务，需要确定交代任务的顺序以保证任务尽早完成
//思路：完成时间越长的越先交代
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

struct Job{
	int j,b;
	bool operator < (const Job&x) const{
		return j>x.j;
	}
};

int main(){
	int n,b,j,kcase=1;
	while(scanf("%d",&n)==1&&n){
		vector<Job> v;
		for(int i=0;i<n;i++){
			scanf("%d%d",&b,&j);
			v.push_back((Job){j,b});
	}
	sort(v.begin(),v.end());
	int s=0;
	int ans=0;
	for(int i=0;i<n;i++){
		s+=v[i].b;//当前任务的开始执行时间
		ans=max(ans,s+v[i].j);//更新任务执行完毕时的最晚时间
	}
	printf("case %d:%d\n",kcase++,ans);
}
return 0;
}

//总结：1.复习vector的用法以及相关函数2.复习符号重载

