#include<stdio.h>
#include<stdlib.h>
void reversearray (int arr[],int n){
       int temp[n];
       for(int i=0;i<n;i++)
           temp[i]=arr{n-i-1];
       for(int i=0;i<n;i++)
       arr[i]=temp[i];
}
int main () {
int arr[]={1,4,3,2,6,5};
int n-size of (arr) / size of (arr[0]);
reverse array (arr,n);
for (int i=0;i<n;i++)
 printf("%d", arr[i]);
return 0;
}
