//杨氏矩阵
//有一个二维数组. 数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。 时间复杂度小于O(N);

#include<stdio.h>
int find(int arr[3][3],int k,int* row,int* col)
{
	int x=0;
	int y=*col-1;
	while(k!=arr[x][y])
	{
		if(arr[x][y]>k)
		{
			y=y-1;
		}
		else
		{
			x=x+1;
		}
		if(x>=*col||y<0)
		{return 0;break;}
	}
	*row=x;
	*col=y;
	return 1;
}
int main()
{
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int k=0;
	int ret;
	int x=3,y=3;
	scanf("%d",&k);
	ret=find(arr,k,&x,&y);
	if(ret==1)
		{
			printf("找到了");
			printf("%d行 %d列",x,y);

	}
	else
		printf("找不到");
	return 0;
}