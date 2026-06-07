#include <iostream>

int main() {
    int port;
    std::cout << "enter the open port found by nmap: ";
    std::cin >> port;
    
    if (port == 21) {
        std::cout << "critical ftp open threat cleartext protocol no encryption data can be sniffed" << std::endl;
    } 
    else if (port == 22) {
        std::cout << "warning ssh open threat high risk of brute force use hydra to check password strenght" << std::endl;
    }
    else if (port == 80) {
        std::cout << "info http web server open threat cleartext protocol no encryption data can be sniffed" << std::endl;
    }
    else if (port == 443) {
        std::cout << "info web server open traffic is encrypted but web app can have bugs like sql injection" << std::endl;
    }
    else if (port == 3389) {
        std::cout << "warning windows rdp open threat remote desktop exposed attackers can brut force it" << std::endl;
    }
    else {
        std::cout << "unknown port run nmap with sv flag to see the versions of the program" << std::endl;
    }

}
