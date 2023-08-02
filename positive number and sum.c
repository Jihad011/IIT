#include<stdio.h>
int main(){
int i,sum=0,n;
printf("Enter the number:");
scanf("%d",&n);
printf("The first %d positve number is: ",n);
for(i=1;i<=n;i++){
    printf("%d ",i);
    sum = sum+i;
    if(i==n)printf("\n");
}
printf("The sum of %d number is: %d\n",n,sum);
}
