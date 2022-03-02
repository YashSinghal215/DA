#include<stdio.h>
int Binary(int a[],int n,int key);
int main()
{
    int n,key;
    printf("Enter limit\n");
    scanf("%d",&n);
    int a[n];

    printf("Enter values\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter key\n");
    scanf("%d",&key);

    int ans = Binary(a,n,key);
    if(ans == -1)
    {
        printf("Value not found");
    }
    else
        printf("Value found\n");
        printf("index is %d",ans);
}

int Binary(int a[],int n,int key)
{
    int l=0,r=n-1,mid;
    int count = 0;
    while(l<=r)
    {
        mid = (l+r)/2;
        if(a[mid] == key)
        {
            return mid;
        }
        else if(a[mid]>key)
            r = mid-1;
        else if(a[mid]<key)
            l = mid+1;
    }
    return (-1);
}
