#include <vector>

#include "functions.hpp"

void bleep(std::string &text, std::string const &bannedWord) {
  int const bannedLength = bannedWord.length();
  size_t startFrom = 0;

  while (true) {
    const size_t position = text.find(bannedWord, startFrom);

    if (position != std::string::npos) {
      replace_with_stars(text, position, bannedLength);

      startFrom = position + bannedLength - 1;
    }
    else {
      break;
    }
  }
}

void replace_with_stars(std::string &text, size_t const &startsAt, int const &length) {
  std::string replacingString = "";

  for (int i = 0; i < length; i++) {
    replacingString += "*";
  }

  text.replace(startsAt, length, replacingString);
}
