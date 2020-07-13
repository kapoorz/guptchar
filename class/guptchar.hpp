namespace simhah
{
    class Guptchar
    {
        string ip;
        string openports;

    public:
        Guptchar(string); // Takes An Ip Address
        ~Guptchar();      // Destructor

        void nmapscan(); // Does Nmap Default Scan
    };
} // namespace simhah