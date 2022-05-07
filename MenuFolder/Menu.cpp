#include <iostream>
#include "../Dashboard/AddSite.hpp"
#include "../Dashboard/SearchPasswords.hpp"
#include "../Dashboard/Sites.hpp"

void menuStart(){
    std::cout << "1) View Saved Sites" << std::endl;
    std::cout << "2) Search for a Password" << std::endl;
    std::cout << "3) Add a Site" << std::endl;
    std::cout << "4) Exit" << std::endl;

    int option;
    std::cin >> option;

  if(option == 1){
    displaySites();
    std::cout << std::endl << std::endl <<
    "********************************" << std::endl << std::endl << std::endl;
    menuStart();
  }
  else if(option == 2){
    searchPasswords();
    std::cout << std::endl << std::endl <<
    "********************************" << std::endl << std::endl << std::endl;
    menuStart();
  }
  else if(option == 3){
    addSite();
    std::cout << std::endl << std::endl <<
    "********************************" << std::endl << std::endl << std::endl;
    menuStart();
  }
  else if(option == 4){
    system("exit");
  }
  else {
    std::cout << "Not a Valid Function" << std::endl;
  }
}
