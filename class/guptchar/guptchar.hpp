#include "header.hpp"

namespace kanha
{
    namespace guptchar
    {
        void init();

        namespace scanner
        {
            namespace nmap
            {

                void (*gdefault)(string);          // Nmap Default Scan
                void (*gport)(string);             // Nmap All Port Scan
                void (*gcomplete)(string, string); // Nmap Complete Scan
                void (*gremovedef)(string);        // Remove Nmap Default Scan Results
                void (*gremoveport)(string);       // Remove Nmap Port Scan Results

            } // namespace nmap

        } // namespace scanner

    } // namespace guptchar

} // namespace kanha