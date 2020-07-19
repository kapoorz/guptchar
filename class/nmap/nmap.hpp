namespace kanha
{
    namespace local
    {
        namespace scanner
        {
            namespace nmap
            {
                void gdefault(string);          // Default Nmap Scan
                void gport(string);             // All TCP Port Nmap Scan
                void gcomplete(string, string); // Complete Nmap Scan
                void gremovedef(string);        // Remove Default scan Results
                void gremoveport(string);       //Remove Port Scan Results

            }; // namespace nmap

        }; // namespace scanner

    }; // namespace local

}; // namespace kanha
