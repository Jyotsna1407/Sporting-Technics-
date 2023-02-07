#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,temp,a[30],loc,min;
    int array[100],k,smallest,position;
    char ch;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("Enter %d integers\n", n);
    for (i = 0; i < n; i++)
        {
            scanf("%d", &array[i]);
        }
    for (i = 0 ; i <(n - 1); i++)
        {
            smallest = array[i];
            position = i;
    for(j=(i+1); j<n; j++)
        {
	 if(array[j] < smallest)
        {
		    smallest = array[j];
		    position = j;
	              }
                   }
               printf("\n Smallest = %d position = %d",smallest, position);
              getch();

             if(smallest == array[i])
              {
	         printf("\n");
              }
             else
              {
	        temp = array[i];
	        array[i] = smallest;
	        array[position]= temp;
              }
              printf("\n");
              for(k=0;k<n;k++)
              {
	       printf("\t%d",array[k]);
              }
             }
            printf("\n Sorted Elements:");
            for(i=0;i<n;i++)
             {
	       printf("\t%d",array[i]);
             }}

