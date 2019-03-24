#include <stdio.h>
# define N 10
int main()
{
	int a[N][N],n,i,j,r;
	printf("please enter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)//输入n行n列的数组 
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]); 
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		int max=0;//设最大数所在的列为max=0列 
		for(j=0;j<n;j++)//得到每一行最大数所在列 
		{
			if(a[i][max]<a[i][j])
			max=j;
		}
		for(r=1;r<n;)//验证这一行最大数在对应的列中是不是最小的数 
		{
			if(a[i][max]<a[r][max])
			r++;
		}
		if(r>=n)printf("%d\n",a[i][max]);
	}
 } 
