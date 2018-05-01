#include <stdio.h>

int main(void)
{
    int num[1000];
    int temp;
    int i, j, k, n=0;

	scanf("%d", &n);
    for(i = 0; i<n; i++)
    { 
        scanf("%d", &num[i]);
    }

    for(j=0;j<n;j++)
    {
        for(k=0;k<n-1;k++)
        {
            if(num[k] > num[k+1])
			{
                temp = num[k];   
                num[k]=num[k+1];
             
			    num[k+1] = temp;
            }
        }
	}
     for (i = 0 ; i<n;i++)
     {
         if(i == 0)
         {
             printf("%d\n",num[i]);
         }

    	else if(i == n-1)
    	{
        	printf("%d", num[i]);
    	}
    	else
    	{
    		printf("%d\n", num[i]);
    	}
	}
    return 0;
}
