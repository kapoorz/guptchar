namespace kanha
{
    namespace guptchar
    {
        void init()
        {
            kanha::guptchar::scanner::nmap::gdefault = kanha::local::scanner::nmap::gdefault;
            kanha::guptchar::scanner::nmap::gport = kanha::local::scanner::nmap::gport;
            kanha::guptchar::scanner::nmap::gcomplete = kanha::local::scanner::nmap::gcomplete;
            kanha::guptchar::scanner::nmap::gremovedef = kanha::local::scanner::nmap::gremovedef;
            kanha::guptchar::scanner::nmap::gremoveport = kanha::local::scanner::nmap::gremoveport;
        }

    }; // namespace guptchar

}; // namespace kanha