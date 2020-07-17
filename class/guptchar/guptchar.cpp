namespace kanha
{
    namespace guptchar
    {
        void init()
        {
            kanha::guptchar::scanner::nmap::gdefault = kanha::local::scanner::nmap::gdefault;
            kanha::guptchar::scanner::nmap::gport = kanha::local::scanner::nmap::gport;
            kanha::guptchar::scanner::nmap::gcomplete = kanha::local::scanner::nmap::gcomplete;
        }

    }; // namespace guptchar

}; // namespace kanha