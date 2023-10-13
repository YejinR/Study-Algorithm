#include <stdio.h>

int main() {
  int N;
  int arr[33];
  int result[33]; // 32비트
  int index = 0;
  scanf("%d", &N);


  while(N!=0){
    if(N%2 == 1){
      arr[index] = 1;
    }
    else {
      arr[index] = 0;
    }
    N/=2;
    index++;
  }

  for(int i=0; i<32; i++){
    if(arr[i] == 1){
      result[i] = 0;
    }
    else {
      result[i] = 1;
    }
  }

  result[0]++;

  for(int i=0; i<32; i++){
    if(result[i] == 2){
      result[i] = 0;
      result[i+1]++;
    }
  }

  int count = 0;

  for(int i=0; i<32; i++){
    if(arr[i] != result[i]){
      count++;
    }
  }

  printf("%d", count);
  return 0;
  
}