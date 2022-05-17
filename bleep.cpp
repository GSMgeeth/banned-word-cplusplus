#include <iostream>

#include "functions.hpp"

int main() {
  const std::string bannedWord = "broccoli";
  std::string text = "I'm rolling up my broccoli like his broccoli.";

  bleep(text, bannedWord);

  std::cout << text << std::endl;
}
