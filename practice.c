#include<stdio.h>
int main(){
  int arr[4];
  for (int i=0;i<4;i++){
    printf("enter the digits of number : ========");
    scanf("%d",&arr[i]);
  }
  for(int i=0;i<4;i++){
    arr[i]=arr[i]+2;
  }
  for(int i=0;i<4;i++){
    printf("%d",arr[i]);
  }
}























