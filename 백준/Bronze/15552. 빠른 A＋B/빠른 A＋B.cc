#include <iostream>

int main(void)
{
  
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);

  int TC, A, B;
  std::cin>>TC;
    
  for(int i=0;i<TC;i++)
  {
      std::cin>>A >>B;
      std::cout<<A+B<<"\n";
  }
  return 0;
}