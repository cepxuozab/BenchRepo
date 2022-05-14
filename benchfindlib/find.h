#ifndef BENCHFIND_BENCHFINDLIB_FIND_H
#define BENCHFIND_BENCHFINDLIB_FIND_H
#include <string>
#include <string_view>
#include <vector>

inline const std::string_view LoremIpsumStrv{ "Lorem ipsum dolor sit amet, consectetur adipiscing elit, "
                                             "sed do eiusmod tempor incididuntsuperlongwordsuper ut labore et dolore magna aliqua. Ut enim ad minim veniam, "
                                             "quis nostrud exercitation ullamco laboris nisi ut aliquipsuperlongword ex ea commodo consequat. Duis aute "
                                             "irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. "
                                             "Excepteur sint occaecat cupidatatsuperlongword non proident, sunt in culpa qui officia deserunt mollit anim id est laborum." };
 bool IsPresent(std::string_view pattern, std::string_view str);
 bool IsPresentBoyerMoore(std::string_view pattern, std::string_view str);
#endif//BENCHFIND_BENCHFINDLIB_FIND_H
