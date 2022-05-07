#include <iostream>
#include <fstream>

void searchPasswords(){
  std::ifstream passwords("sitedata.txt", std::ios::in);
  std::string siteString, site, pass, user;
  bool found = false;

  system("clear");

  std::cout << "Search For a Site" << std::endl;
  std::cin >> siteString;
  std::cout << std::endl;

  while(passwords >> user >> pass >> site){
    if(siteString == site){
        std::cout << "Found Your Site " << std::endl;

        std::cout << "Username Is: " << user << std::endl;
        std::cout << "Password Is: " << pass << std::endl;
        std::cout << "SiteName: " << site << std::endl;
        found = true;

    }
  }
  if(!found){
    std::cout << "Found no sites matching: " << siteString << std::endl;
  }
}
