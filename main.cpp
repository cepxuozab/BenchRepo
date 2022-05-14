#include <iostream>
#include "find.h"

int main() {
  auto found = IsPresent("in voluptate velit esse",LoremIpsumStrv);
  auto found_boyer= IsPresentBoyerMoore("in voluptate velit esse",LoremIpsumStrv);
  std::cout<<std::boolalpha<<found<<' '<<found_boyer;
  return 0;
}
