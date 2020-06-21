

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
        string getip();

        //Scans
        void defaultscan();
        void portscan();
        void completescan();

    };
}; // namespace prtpalvij