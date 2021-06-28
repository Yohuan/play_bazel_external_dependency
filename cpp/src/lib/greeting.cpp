#include <algorithm>

#include "greeting.h"

std::string Greet(const std::string &who)
{
  std::string message{"Hello " + who};
  for (auto &c : message)
  {
    c = toupper(c);
  }
  return message;
}
