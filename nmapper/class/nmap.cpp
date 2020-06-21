
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

     // Get

     string nmap::getip()
     {
          return IP;
     }

     // Scans
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
          system(("nmap -vvv -T5 -p- " + IP + " > nmapper" + IP + "@port.temp.scan").c_str());
          cout << "[+] Nmap Port Scan Completed \n[F] Sending Results to => nmapper" + IP + "@port.temp.scan \n[D] Done\n"
               << flush;
     }

     void nmap::completescan()
     {
          // Complete Scan for An IP
          cout << "\n\n\n\n[*] Starting Nmap Complete Scan \n"
               << flush;
          string openport = opcom(IP);
          system(("nmap -vvv -A -sV -O " + IP + " > nmapper" + IP + "@complete.scan").c_str());
          cout << "[+] Complete Scan Completed \n[F] Sending Results to => nmapper" + IP + "@complete.scan \n[D] Done \n"
               << flush;
     }

}; // namespace prtpalvij