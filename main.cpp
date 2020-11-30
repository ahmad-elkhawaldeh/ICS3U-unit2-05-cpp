// Copyright (c) 2020 Ahmad El-khawaldeh All rights reserved.
//
// Created by Ahmad El-khawaldeh 
// Created on Nov 2020
// This program shows hoe local and global variables workk

#include <iostream>

// global variable
int variableX = 25;

void localVariable() {
  // this shows what happens with local variables

  int variableX = 10;
  int variableY = 30;
  int variableZ = variableX + variableY;
  std::cout << "local variableX, variableY, variableZ:" <<variableX << "+" << variableY << "=" << variableZ <<std::endl;
}

void globalVariable() {
   // this shows what happens with global variables

   variableX = variableX + 1;
   int variableY = 30;
   int variableZ = variableX + variableY;
  std::cout << "local variableX, variableY, variableZ:" <<variableX << "+" << variableY << "=" << variableZ <<std::endl;
}

int main() { 
    // this function calls local and global

    localVariable();
    globalVariable();
}
