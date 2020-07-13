namespace simhah
{

    // Constructor and Destructor
    Guptchar ::Guptchar(string ip) : ip(ip), openports("")
    {
    }

    Guptchar::~Guptchar()
    {
    }

    // Operator Overloads

    // Other Functions

    void Guptchar::nmapscan()
    {
        simhah::nmap scanner(ip);
        scanner.defaultscan(); // Default Scan (Temporary)
        scanner.portscan();    // Scans For All Open Ports (Temporary)
        scanner.completescan(); // Does a Complete Scan
        scanner.removeportscan(); // Removes Portscan Results
        scanner.removedefaultscan(); // Remove Default Scan Results
    }

} // namespace simhah