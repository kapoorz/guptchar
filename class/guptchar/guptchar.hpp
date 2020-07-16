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

                void (*gdefault)(string);
                void (*gport)(string);

            } // namespace nmap

        } // namespace scanner

    } // namespace guptchar

} // namespace kanha