#include "finder.h"

#include <qdebug.h>
#include <iostream>

int main() { 
  Finder *finder = new Finder();
  std::cout << "Enter the symbol:" << std::endl;
  std::cout << ">>> ";
  char symb = 0;
  std::cin >> symb;

  finder->setSymbolToFind(symb);
  qDebug() << finder->getCounter();
  delete finder;
}