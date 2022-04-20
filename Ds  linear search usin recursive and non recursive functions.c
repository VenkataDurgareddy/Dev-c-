#include<stdio.h>
void linear_search(int val,int n,int arr[*]);
int linear_search_re(int val,int n,int arr[*]);
void main()
{
	int n,val,pos,option,i;
	printf("Enter the size of an array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("Enter the value to search:");
	scanf("%d",&val);
	printf("\nenter 1 for non recursive function");
	printf("\nenter 2 for recursive function");
	scanf("%d",&option);
	switch(option)
	{
		case 1:
			{
				linear_search(val,n,arr);
				break;
			}
			case 2:
				{
					pos=linear_search_re(val,n,arr);
					if(pos!=0)
					printf("\nelement %d is found at position %d using recursion ",val,pos);
					else
					printf("\nelement %d does not found using recursion",val);
					break;
			    }
			    default:
			    printf("\nenter the correct option!");
	}
}
void linear_search(int val,int n,int arr[n])
{
	int i,found=0,pos=-1;
	for(i=0;i<n;i++)
	{
		if(arr[i]==val)
		{
			found=1;
			pos=i;
			printf("\nelement %d is found at position %d using non recursion",val,i+1);
			break;
		}
	}
	if(found==0)
	printf("\nelement %d does not found using non recursion ",val);
}
int linear_search_re(int val,int n,int arr[n])
{
	if(n>0)
	{
		if(arr[n-1]==val)
		return n;
		else
		return linear_search_re(val,n-1,arr);
	}
	return 0;
}
