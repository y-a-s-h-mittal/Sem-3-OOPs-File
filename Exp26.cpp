#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;
int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    if (!fin || !fout)
    {
        cout << "File opening error!";
        return 1;
    }
    char ch;
    while (fin.get(ch))
    {
        if (!isspace((unsigned char)ch))
        {
            fout.put(ch);
        }
    }
    fin.close();
    fout.close();
    cout << "White spaces removed successfully.";
    return 0;
}