#include "header.hpp" // Contains All Headers
#include "nmapper.hpp" // Contains all functions

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

    return 0;

}