

namespace simhah
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

        // scans
        void defaultscan();
        void portscan();
        void completescan();
        void removedefaultscan();
        void removeportscan();
    };
}; // namespace simhah