#include <cstdio>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <array>
#include <vector>

#include "./MenuFolder/Menu.hpp"

std::vector<std::string> packages;


void extra(){
packages.push_back("fmt");

int installed = system("~/vcpkg/vcpkg --version");
  if(installed != 0){
            //Begin install of vcpkg
      std::cout << "Installing vcpkg for you, at your root directory";
      system("git clone https://github.com/Microsoft/vcpkg.git");
      system("~/vcpkg/bootstrap-vcpkg.sh");
    }  


    for(auto const& lib : packages){
      std::string fitted_lib = "~/vcpkg/vcpkg install " + lib;
      const char* char_string = fitted_lib.c_str();
      system(char_string);

      std::array<char, 128> buffer;
      std::string result;
      std::unique_ptr<FILE, decltype(&pclose)> pipe(popen("~/vcpkg/vcpkg install fmt", "r"), pclose);

      while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr) {
          result += buffer.data();
      }
    
  }
}

int main(){
  //system("clear");

  //std::cout << "Hello and Welcome to Your Password Finder" << std::endl;

  //menuStart();
  //extra();

  std::cout << "Hello";
  return 0;
}

