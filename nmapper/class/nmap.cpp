
namespace prtpalvij
{
    // Constructor

    nmap::nmap(string IP) : IP(IP)
    {
    }

    nmap::nmap(char *IP) : IP(IP)
    {
    }

    // Destructor

    // methods
    void nmap::defaultscan()
    {
        // Default scan which is temporary until the script executes
        cout << "\n\n\n\n[*] Starting Default Nmap Scan \n"
             << flush;
        system(("nmap -vvv " + IP + " > nmapper" + IP + "@def.temp.scan").c_str());
        cout << "[+] Default Scan Completed \n[F] Sending Results to => nmapper" + IP + "@def.temp.scan \n[D] Done\n"
             << flush;
    }

    void nmap::portscan()
    {
        // Port Scan which scans for open ports
        cout << "\n\n\n\n[*] Starting Nmap Port Scan \n"
             << flush;
        system(("nmap -T5 -p- -vvv " + IP).c_str());
        cout << "[+] Nmap Port Scan Completed \n[F] Sending Results to => nmapper" + IP + "@port.temp.scan \n[D] Done\n"
             << flush;
    }

}; // namespace prtpalvij