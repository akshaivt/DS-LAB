#include <stdio.h>
int main () {
int n,i,sum=0,arr[100];
printf("enter a number ");
scanf("%d",&n);
for (i=0; i<n; i++) {
    scanf ("%d",&arr[i]);
    sum = sum+arr[i];
}
printf("sum is %d",sum);
return 0;
}

