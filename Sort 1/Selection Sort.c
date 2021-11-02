#include <stdio.h>

int main(void){
  int data[6] = {5, 2, 4, 6, 1, 3};
  int temp;
  printf("Before sorting :\n");
  for(int i =0; i<6;i++){
    printf("%d",data[i]);
  }
  printf("\n");
  for(int i=0; i<5;i++){ // 비교대상이 되는 기준원소
      for(int j=i+1;j<6;j++){ //
          if(data[i]>data[j]){ //오름차순으로 비교
              temp=data[i];
              data[i]=data[j];
              data[j]=temp; //왼쪽에 더 작은수 저장
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
