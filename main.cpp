#include "header/header.hpp" // contains headers

#include "class/guptchar/guptchar.hpp"
#include "class/guptchar/guptchar.cpp"

int main(int argv, char *argc[])
{
    if (argv < 2)
    {
        cerr << "Error : Enter IP Address of the Target ;\n";
        cerr << "Exiting now ;\n";
        return -1;
    }

    string ip = argc[1];
    string openports;

    kanha::guptchar::init();                                  // Initializes Everything
    kanha::guptchar::scanner::nmap::gdefault(ip);             // Does Nmap Default Scan
    kanha::guptchar::scanner::nmap::gport(ip);                // Does Nmap Full TCP Portscan
    openports = kanha::help::opcs(ip);                        // Stores open port Numbers As Comma Seperated
    kanha::guptchar::scanner::nmap::gcomplete(ip, openports); // Does Nmap Full Scan

    return 0;
}