#include <stdio.h>

int main(void){
  int data[6] = {5, 2, 4, 6, 3, 1};
  int temp;
  printf("Before sorting :\n");
  for(int i =0; i<6;i++){
    printf("%d",data[i]);
  }
  
  for(int i=5; i>0;i--){ // 
      for(int j=4;j>=0;j--){ //
          if(data[j]>data[j+1]){ //
              temp=data[j];
              data[j]=data[j+1];
              data[j+1]=temp; //
            } 
        } //반복횟수에 따른 정렬상태 확인
        printf("\n%d번째 :",i);
        for(int i=0; i<6;i++){
      printf("%d",data[i]);
  }
  
    }
  printf("\nAfter sorting :\n");
  for(int i=0; i<6;i++){
      printf("%d",data[i]);
  }
  
  return 0;
  }
