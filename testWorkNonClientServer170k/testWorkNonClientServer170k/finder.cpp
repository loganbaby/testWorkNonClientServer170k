#include "finder.h"

#include <fstream>
#include <qdebug.h>

Finder::~Finder() { lineWords.clear(); }

void Finder::getCountSymbols(const char *path) {
  std::ifstream in(path);
  if (in.is_open()) {
    std::string line = "";

    while (getline(in, line)) {
      lineWords.push_back(line);
    }

    for (auto& i : lineWords) {
      std::reverse(i.begin(), i.end()); 
    }

    for (auto& i : lineWords) {
      for (unsigned int j = 0; j < i.length(); ++j) {
        if (i[j] == symbolToFind) ++counter;
      }
    }
  } else {
    qDebug() << "Error. Incorrect path to file";
  }
  in.close();
}