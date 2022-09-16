// #include <iostream>
// #include <fmt/core.h>
#include <fmt/format.h>
#include <ranges>
#include <string_view>

int main(int argc, char *argv[])
{
  // lazy evaluation
  auto split_strings = std::string_view {"Hello World c++20"} | std::ranges::views::split(' ');

  for (const auto& string : split_strings) {
    fmt::print("{}\n", string);
    // std::cout << std::string_view{string.begin(), string.end()} << std::endl;
  }
  return 0;
}
