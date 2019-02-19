#include<stdio.h>
#include<conio.h>

int find_cmn(int *,int *,int,int);//to find common element from both list
int find_num(int,int,int *,int *,int); //to find selected elements on array
void main()
{
	int n,q,k,i,f[100],qu[100],flag=0;
	int x,a,b,c,d,y,l1[100],l2[100],n1,n2,count=0;
	clrscr();
	printf("Enter N, Q and K values:\n");
	scanf("%d %d %d",&n,&q,&k);
	x=n;
	printf("\nEnter fortune numbers:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&f[i]);
	}
	while(q--)
	{
		printf("\nEnetr Query elements:\n");
		scanf("%d",&x);
		if(x==0)
		{
			scanf("%d %d",&y,&f[y]);
		}
		else if(x==1)
		{
			scanf("%d %d %d %d",&a,&b,&c,&d);
			n1=find_num(a,b,f,l1,n);
			n2=find_num(c,d,f,l2,n);
			count=find_cmn(l1,l2,n1,n2);

			if(count>=k)
			{
				printf("\nPropose Her");
			}
			else if(count<k && flag!=0)
			{
				printf("\nDo not Propose Her");
			}
		}
	}
	getch();
}
int find_num(int a,int b,int *f,int *l,int n)
{
	int i,k=0;
	for(i=0;i<n;i++)
	{
		if(f[i]>=a && f[i]<=b)
		{
			l[k++]=f[i];
		}
	}
	return k;
}
int find_cmn(int *l1,int *l2,int n1,int n2)
{
	int i,j,count=0;
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			if(l1[i]==l2[j])
			{
				count ++;
			}
		}
	}
	return count;
}