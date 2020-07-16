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

    kanha::guptchar::init();
    kanha::guptchar::scanner::nmap::gdefault(ip);
    kanha::guptchar::scanner::nmap::gport(ip);

    return 0;
}