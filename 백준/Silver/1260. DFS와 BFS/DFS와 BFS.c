#include <stdio.h>

int graph[1001][1001] = {0};
int DFSvisit[1001] = {0};
int BFSvisit[1001] = {0};
int queue[1001];

void DFS(int V, int N) {
  DFSvisit[V] = 1;
  printf("%d ", V);
  for (int i = 1; i <= N; i++) {
    if (graph[V][i] == 1 && DFSvisit[i] == 0) {
      DFS(i, N);
    }
  }
}

void BFS(int V, int N) {
  int front = 0, rear = 0;
  int pop;

  printf("%d ", V);
  queue[0] = V;
  rear++;
  BFSvisit[V] = 1;

  while (front < rear) {

    pop = queue[front];
    front++;

    for (int i = 1; i <= N; i++) {
      if (graph[pop][i] == 1 && BFSvisit[i] == 0) {
        printf("%d ", i);
        queue[rear] = i;
        rear++;
        BFSvisit[i] = 1;
      }
    }
  }
}

int main() {
  int N, M, V;
  scanf("%d %d %d", &N, &M, &V);

  int a, b;

  for (int i = 0; i < M; i++) {
    scanf("%d %d", &a, &b);
    graph[a][b] = 1;
    graph[b][a] = 1;
  }

  DFS(V, N);
  printf("\n");
  BFS(V, N);

  return 0;
}