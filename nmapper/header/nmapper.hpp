// open ports as comma seperated
string opcom(string IP)
{
    system(("cat nmapper" + IP + "@port.temp.scan | grep Discovered | cut -d \" \" -f 4 | sed 's/\\/tcp//' > openports.txt").c_str());
    fstream fin;
    fin.open("openports.txt", ios::in);
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
    ans.erase(ans.end() - 2, ans.end());
    return ans;
}