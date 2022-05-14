#include "find.h"
#include <functional>

 bool IsPresent(std::string_view pattern, std::string_view str) {
  // only default_searcher is constexpr in cpp20
  auto it = std::search(str.begin(), str.end(),
                        std::default_searcher(pattern.begin(), pattern.end()));
  return it != str.end();
}

 bool IsPresentBoyerMoore(std::string_view pattern, std::string_view str)
{
  auto it = std::search(str.begin(), str.end(),
                        std::boyer_moore_horspool_searcher (pattern.begin(), pattern.end()));
  return it != str.end();
}
