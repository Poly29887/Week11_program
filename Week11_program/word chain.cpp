#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void copystring();

int n, row,i,j,k,count = 0;
char word[1000][1000] ,c_word[1000][1000], w_ch[100];

int main()
{
	printf("Input : "); 
	scanf("%d %d",&n,&row);
	printf("--------------------------\n");
	for ( i = 0; i < row; i++)
	{
		scanf("%s",word[i]);
	}
	
	printf("--------------------------\n");
	printf("Output : ");
	for (i = 0; i < row; i++)
	{
		count = 0;
		for (j = 0; j < n; j++)
		{
			if (i==row-1)
			{
				copystring();
				break;
			}
			if (*(*(word + i) + j) != *(*(word + i+1) + j))
			{
				copystring();
				count++;
			}
		}
		if (count > 2||i==row-1)
		{
			break;
		}
	}
	for (k = 0; k < n; k++)
	{
		printf("%c", w_ch[k]);
	}
	printf("\n");
}

void copystring()
{
	for (k = 0; k < n; k++)
	{
		w_ch[k] = *(*(word + i) + k);
	}
}
	
