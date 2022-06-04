#include<stdio.h>

int main(){
    int a[50],i,size,num,pas,pos,item;
    printf("Enter the size \n");
    scanf("%d",&size);
   printf("enter the List data\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The elements are\n");
    for(i=0;i<size;i++)
    {
        printf("%d\t\n",a[i]);
    }
    //for insertion of element in array
    printf("Enter the num to be inserted\n");
    scanf("%d",&num);
    printf("Enter the position\n");
    scanf("%d",&pas);
    if(pas<=0||pas>size)
    {
    printf("invalid position\n");
    }
    else{
    
    for(i=size-1;i>=pas-1;i--)
    {
        a[i+1]=a[i];
    }
   a[pas-1]=num;
    size++;
     printf("After insertion the list data\n");
    for(i=0;i<size;i++)
    {
        printf("%d\t\n",a[i]);
    }
    }
    //for deletion of elment in array
    
    printf("Enter the position which you want to delete\n");
    scanf("%d",&pos);
    if(pos<=0||pos>size)
    {
    printf("invalid position\n");
    }
    else{
    
    for(i=pos-1;i<size-1;i++)
    {
        a[i]=a[i+1];
    }
    item=a[pas-1];
    size--;
     printf("After deletion  the list data\n");
    for(i=0;i<size;i++)
    {
        printf("%d\t\n",a[i]);
    }
    }

    return 0;
    }
