#include<stdio.h>
int main()
{
    int a[100],n,i,j;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter array elemnts: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Duplicated elements are :");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                printf("%d ",a[i]);
            }
        }
    }
    j=0;
    for(i=0;i<n;i++)
    {
        int l=1;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            l++;
        }
        if(l>1)
        printf("\nThe number %d is repeated %d times",a[i],l);
    }
}
