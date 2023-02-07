#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],n,i,key,temp,j;
    printf("\n enter the number of array \n");
    scanf("%d",&n);
    printf("enter the array element:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n-1;i++)
    {
        temp=a[i];
        j=i-1;
        while((temp<a[j]&&(j>=0)))
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
    printf("Sorted list is as follows\n");
    for(i=0;i<n;i++)
    {
        printf("\n %d",a[i]);
        
    }
    
}


    
    
        