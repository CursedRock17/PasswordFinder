#include <iostream>
#include <fstream>

void addSite(){
  std::string user, pass, site;

  std::ofstream newSite("sitedata.txt", std::ios::app);

  if (!newSite)
    {
        std::cerr << "Uh oh, our text file could not be opened for writing!\n";
    }

  std::cout << "Now you can add a site with a Username and Password" << std::endl;
  std::cout << "UserName :" << std::endl;
  std::cin >> user;

  std::cout << "Password : " << std::endl;
  std::cin >> pass;

  std::cout << "Finally, the site name : " <<std::endl;
  std::cin >> site;

  newSite << user << ' ' << ' ' << pass << ' ' << site << std::endl;
  newSite.close();

  system("clear");
  system("./run");
}
