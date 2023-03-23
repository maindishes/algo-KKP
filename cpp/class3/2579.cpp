/**
 * 계단 오르기
 * 2023 3 12
6
10
20
15
25
10
20
*/

// BFS 가능 할거 같은데 ?

#include <queue>
#include <vector>
#include <iostream>
#include <algorithm>

int s[305];
int n;
int d[305];

int main(void){
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  std::cin >> n;
  int tot = 0;
  for(int i = 1; i <= n; i++){
    std::cin >> s[i];
    tot += s[i];
  }
  if(n <= 2){
    std::cout << tot;
    return 0;
  }
  d[1] = s[1];
  d[2] = s[2];
  d[3] = s[3];
  for(int i = 4; i <= n-1; i++) 
    d[i] = std::min(d[i-2],d[i-3])+s[i];
  std::cout << tot - std::min(d[n-1],d[n-2]);
}