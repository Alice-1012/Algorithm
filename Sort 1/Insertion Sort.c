#include <stdio.h>

int main(void){
  int data[6] = {5, 2, 3, 6, 4, 1};
  int keyValue;
  int j;
  printf("Before sorting :\n");
  
  for(int i =0; i<6;i++){
    printf("%d",data[i]);
  }
  printf("\n");
  for(int i=0; i<5;i++){ 
      keyValue=data[i+1];
      for(j=i;j>=0;j--){ //keyValue 앞의 숫자들 확인
          if(data[j]>keyValue){ 
              data[j+1]=data[j];
          }
          else{
              break;
          }
        }
        data[j+1]=keyValue;
    } 
        
  printf("After sorting :\n");
  for(int i=0; i<6;i++){
      printf("%d",data[i]);
  }
  
  return 0;
  }
