#include <stdio.h>
#define SIZE 5
int stack [SIZE], top=-1;
void push (int value) {
if (top== SIZE -1) {
printf ("Stack Overflow !\n");
} else{
stack [++top] = value;
printf("%d pushed\n", value);
}
}
void pop() {
if (top== -1) {
printf("Stack Undeflow ! \n");
} else {
printf("%d popped\n", stack[top--]);
}
}
int main() {
int choice,value;
do {
printf("\n1.Push\n2.Pop\n3.Exit \n");
printf("Enter your choice: ");
scanf("%d",&choice);
switch (choice) {
case 1:
printf("Enter value:");
scanf("%d", &value);
push (value);
break;
case 2:
pop();
break;
case 3:
printf("Exiting......\n");
default:
printf("Invalid Choice !");
}
}
while(choice !=3);
return 0;
}











