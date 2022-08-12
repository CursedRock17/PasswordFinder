#include <cstdio>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <array>
#include <vector>
#include <fstream>

#include "./MenuFolder/Menu.hpp"

std::vector<std::string> packages;


int main(){
  system("clear");

  std::cout << "Hello and Welcome to Your Password Finder" << std::endl;

  menuStart();

  return 0;
}

