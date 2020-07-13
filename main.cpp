#include "header/header.hpp"  // Contains All Headers
 // Contains all functions

#include "class/guptchar.hpp"
#include "class/guptchar.cpp"

int main(int argv, char *argc[])
{
    if (argv < 2)
    {
        cerr << "Error : Enter IP Address of the Target ;";
        cerr << "\nExiting now ;";
        return -1;
    }

    string ip = argc[1];
    simhah::Guptchar scanner(ip);

    scanner.nmapscan();

    return 0;
}