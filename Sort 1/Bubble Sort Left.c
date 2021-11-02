#include <stdio.h>

int main(void){
  int data[6] = {5, 2, 4, 6, 3, 1};
  int temp;
  printf("Before sorting :\n");
  for(int i =0; i<6;i++){
    printf("%d",data[i]);
  }
  printf("\n");
  for(int i=1; i<6;i++){ 
      for(int j=0;j<6-i;j++){ 
          if(data[j]>data[j+1]){ 
              temp=data[j];
              data[j]=data[j+1];
              data[j+1]=temp; 
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
