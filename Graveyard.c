//题目：墓地雕塑：周长为10000的圆上有n个等距的雕塑，现又加入m个，使n+m个雕塑在圆周上均匀分布
#include<cstdio>
#include<cmath>
using namespace std;

int main(){
	int n,m;
	while(scanf("%d%d",&n,&m)==2){
		double ans=0.0;
		for(int i=1;i<n;i++){
			double pos=(double)i/n*(n+m);//计算每个需要移动的雕塑的坐标
			ans+=fabs(pos-floor(pos+0.5))/(n+m);
		}
		printf("%.4lf\n",ans*10000);
	}
	return 0;
}

//将周长先缩小再放大
