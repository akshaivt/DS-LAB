#include<stdio.h>
int main () {
int n,i,arr[100], max;
scanf("%d" ,&n);
for(i=0 ; i<n; i++) {
scanf("%d" ,&arr [i]);
}
max=arr[0];
for(i=1;i<n;i++) {
if (arr[i]>max)
max=arr[i];
}
printf("max is %d" , max);
return 0;
}

