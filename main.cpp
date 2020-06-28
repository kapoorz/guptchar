#include "header/header.hpp"  // Contains All Headers
#include "header/nmapper.hpp" // Contains all functions

#include "class/nmap.hpp"
#include "class/nmap.cpp"

int main(int argv, char *argc[])
{
    if (argv < 2)
    {
        cerr << "Error : Enter IP Address of the Target ;";
        cerr << "\nExiting now ;";
        return -1;
    }

    simhah::nmap scanner(argc[1]);

    // Default Scan With Nmap
    scanner.defaultscan();

    // Nmap Open Port Scan
    scanner.portscan();

    // Nmap Complete Scanning
    scanner.completescan();

    // Remove Default Nmap Scan as Complete Scan is Done
    scanner.removedefaultscan();

    // Remove Nmap Port Scan as Complete Scan is Done
    scanner.removeportscan();
    

    return 0;
}