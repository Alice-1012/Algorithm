#include <stdio.h>

int main(void){
  int data[6] = {5, 2, 4, 6, 1, 3};
  int temp;
  printf("Before sorting :\n");
  for(int i =0; i<6;i++){
    printf("%d",data[i]);
  }
  printf("\n");
  for(int i=0; i<5;i++){
      for(int j=i+1;j<6;j++){
          if(data[i]>data[j]){
              temp=data[i];
              data[i]=data[j];
              data[j]=temp;
          }
      }
  }
  printf("After sorting :\n");
  for(int i=0; i<6;i++){
      printf("%d",data[i]);
  }
  printf("\n");
  return 0;
  }
