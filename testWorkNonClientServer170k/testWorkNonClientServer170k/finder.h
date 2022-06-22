#pragma once

#include <vector>
#include <string>

class Finder {
 private:
  char symbolToFind = 0;
  unsigned int counter = 0;
  std::vector<std::string> lineWords;

 protected:
  void getCountSymbols(const char*);

 public:
  explicit Finder() = default;
  ~Finder();

  inline void setSymbolToFind(char& symbolToFind) {
    this->symbolToFind = symbolToFind;
  }

  inline int getCounter() {
    getCountSymbols("text.txt");
    return counter;
  }
};