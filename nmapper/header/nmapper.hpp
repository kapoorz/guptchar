// Nmap Default Scan

void nmapdefaultscan(string IP)
{
    system(("nmap " + IP + " > nmapper" + IP + "@default.temp.scan").c_str());
}