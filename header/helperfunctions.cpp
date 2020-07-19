#pragma once

namespace kanha
{
    namespace help
    {
        // Open ports as comma seperated
        string opcs(string ip)
        {
            string filename = "";
            filename = "openports" + ip + ".txt";
            system(("cat guptchar" + ip + "@port.nmap | grep \"Discovered open port\"| cut -d \" \" -f 4 | sed 's/\\/tcp//' > " + filename).c_str());
            fstream fin;
            fin.open(filename, ios::in);
            if (fin.fail())
            {
                cerr << "[-] Error : Cannot Open the file ;\n";
                cerr << "            Please Check the Path is Correct";
                return "";
            }

            char x;
            string ans = "";
            while (!fin.eof())
            {
                x = fin.get();
                if (x == '\n')
                    x = ',';
                ans.push_back(x);
            }
            fin.close();
            remove(filename.c_str());
            ans.erase(ans.end() - 2, ans.end());
            return ans;
        }

    }; // namespace help

}; // namespace kanha