namespace kanha
{
     namespace scanner
     {
          namespace nmap
          {
               void gdefault(string ip)
               {
                    cout << "\n\n\n\n";
                    cout << "[*] Starting Default Nmap Scan \n";
                    cout << flush;
                    system(("nmap -vvv -sV " + ip + " > guptchar" + ip + "@def.nmap").c_str());
                    cout << "[+] Default Scan Completed \n";
                    cout << "[F] Sending Results to => guptchar" + ip + "@def.nmap \n";
                    cout << "[D] Done\n";
                    cout << flush;
               }

               void gport(string ip)
               {
                    cout << "\n\n\n\n";
                    cout << "[*] Starting Nmap Port Scan \n";
                    cout << flush;
                    system(("nmap -vvv -T5 -p- " + ip + " > guptchar" + ip + "@port.nmap").c_str());
                    cout << "[+] Nmap Port Scan Completed \n";
                    cout << "[F] Sending Results to => guptchar" + ip + "@port.nmap \n";
                    cout << "[D] Done\n";
                    cout << flush;
               }

          } // namespace nmap

     } // namespace scanner
/*
    
    
   

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

     void nmap::removedefaultscan()
     {
          // After Complete Scan , It should remove default scan results
          cout << "\n\n\n\n[*] Removing Nmap Default Scan Results \n";
          string filename = "nmapper" + IP + "@def.temp.scan";
          remove(filename.c_str());
          cout << "[+] Removed " + filename;
          cout << "\n[F] Please Refer To Complete Scan Now";
          cout << "\n[D] Done\n"
               << flush;
     }

     void nmap::removeportscan()
     {
          // After We have Done With our Program , We remove Port Scan as Well
          cout << "\n\n\n\n[*] Removing Nmap Port Scan Results \n";
          string filename = "nmapper" + IP + "@port.temp.scan";
          remove(filename.c_str());
          cout << "[+] Removed " + filename;
          cout << "\n[F] Please Refer To Complete Scan Now";
          cout << "\n[D] Done\n"
               << flush;
     }
*/
}; // namespace kanha