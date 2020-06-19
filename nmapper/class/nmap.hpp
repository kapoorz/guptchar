

namespace prtpalvij
{
    class nmap
    {
        string IP;

    public:
        // constructors
        nmap(string); // Takes String As IP address
        nmap(char *); // Takes Character Array As IP address

            // methods
            void defaultscan();
            void portscan();
    };
}; // namespace prtpalvij