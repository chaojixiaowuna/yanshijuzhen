//���Ͼ���
//��һ����ά����. �����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ� ʱ�临�Ӷ�С��O(N);

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
			printf("�ҵ���");
			printf("%d�� %d��",x,y);

	}
	else
		printf("�Ҳ���");
	return 0;
}