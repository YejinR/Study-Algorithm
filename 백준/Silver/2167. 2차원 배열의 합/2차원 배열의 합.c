#include <stdio.h>

int main() {
  int N, M;
  int i, j, x, y;
  scanf("%d %d", &N, &M);

  int arr[N][M];

  for (int i = 0; i < N; i++) {
    for(int j=0; j<M; j++){
      scanf("%d", &arr[i][j]);
    }
  }
  
  int K;
  scanf("%d", &K);

  while(K--){
    scanf("%d %d %d %d", &i, &j, &x, &y);
    int sum=0;
    for(int a=i-1; a<x; a++){
      for(int b = j-1; b<y; b++){
        sum += arr[a][b];
      }
    }
    printf("%d\n", sum);
  }
}