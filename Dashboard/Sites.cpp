#include <iostream>
#include <fstream>

void displaySites(){
  std::ifstream siteList("sitedata.txt", std::ios::in);
  std::string sites, user, pass;

  system("clear");
  std::cout << "You've saved the current sites: " << std::endl;

  while(siteList >> user >> pass >> sites){
    std::cout << sites << std::endl;
  }

}
