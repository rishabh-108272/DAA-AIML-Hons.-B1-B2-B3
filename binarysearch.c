#include<stdio.h>

int binarysearch(int n,int a[],int key,int s,int e){
    while(s<=e){
        int mid=(s+e)/2;
        if(key==a[mid])
        return mid;
        else if(key<a[mid])
        return binarysearch(n,a,key,s,mid-1);
        else
        return binarysearch(n,a,key,mid+1,e);
            }
            return -1;
}

int main(){
    {
        {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int key,result;
    scanf("%d",&key);
    result=binarysearch(n,a,key,0,n-1);
    if(key==a[result]){
        printf("Element found!");
    }else{
        printf("Element not found!");
    }
}
}
}