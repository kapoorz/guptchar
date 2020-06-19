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

    string IP(argc[1]);

    // Default Scan With Nmap
    nmapdefaultscan(IP);

    // Nmap Open Port Scan
    nmapopenportscan(IP);

    return 0;
}