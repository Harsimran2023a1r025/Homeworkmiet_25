#include<stdio.h>
int main()
{
    int n;
    printf("enter suze of array");
    scanf("%d",&n);
    int a[n],i,sum=0,sum1=0;
    printf("enter array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            sum=sum+a[i];
        }
        else
        {
            sum1=sum1+a[i];

        }


    }
                    printf("Sum of even number ias %d\n",sum);
                                    printf("Sum of odd number ias %d\n",sum1);




    }
    

