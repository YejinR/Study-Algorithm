#include <stdio.h>
#include <string.h>

int main(){
  char A[81], B[81], result[81];
  scanf("%s %s", A, B);

  int startA = strlen(A)-1;
  int startB = strlen(B)-1;

  for(int i=0; i<strlen(A); i++){
    if(A[i] == '1'){
      startA = i;
      break;
    }
  }
  for(int i=0;i<strlen(B); i++){
    if(B[i]=='1'){
      startB = i;
      break;
    }
  }

  int endA = strlen(A)-1;
  int endB = strlen(B)-1;
  int carry = 0 ;
  int resultIndex = 0;

  while(1){
    int temp = (A[endA]-'0')+(B[endB]-'0')+carry;
    carry = temp/2;
    result[resultIndex] = (temp%2)+'0';

    endA--;
    endB--;
    resultIndex++;

    if(endA+1 == startA){
      break;
    }
    if(endB+1 == startB){
      break;
    }
  }

  for(;startA != endA+1;endA--){ 
    int temp = (A[endA]-'0')+carry;
    carry = temp/2;
    result[resultIndex] = (temp%2)+'0';
    resultIndex++;
  } //초기화 부분은 진행하지 않음, 그리고 for루프는 startA !=endA+1이 true일 동안 endA--를 하면서 돌아간다. 

  for(;startB != endB+1;endB--){
    int temp=(B[endB]-'0')+carry;
    carry = temp/2;
    result[resultIndex] = (temp%2)+'0';
    resultIndex++;
  }

  if(carry == 1){
    result[resultIndex] = carry + '0';
    resultIndex++;
  }

  result[resultIndex] = '\0';

  int len = strlen(result);
  for(int i=0; i<len/2; i++){
    char temp = result[i];
    result[i]  =result[len-i-1];
    result[len-i-1] = temp;
  }

  printf("%s", result);
  return 0;

  
}