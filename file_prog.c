#include<stdio.h>
int i,j;
void print(int a[i],int n)
{

    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}

void sort(int a[i],int temp,int n)
{
    for (int i=0;i<n;i++)
    {
        for(int j=i+1;j<n-i-1;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

        }
    }
}
main()
{
    int a[5],temp,n;//creating an array of 10 elements
    FILE *fp1,*fp2;//creating a file pointer
    fp1=fopen("file.txt","w");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    print(a,n);
    for(i=0;i<5;i++)
    {
        fprintf(fp1,"%d",&a[i]);
    }
    fclose(fp1);
    fp2=fopen("file.txt","r");
    sort(a,temp,n);
    fclose(fp2);

}



