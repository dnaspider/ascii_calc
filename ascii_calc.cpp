#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "ASCII code calculator\nInput a string and press enter.\nPress Ctrl+C to exit." << endl;

    string qq;
    while (1)
    {
        getline(cin, qq);
        int s = 0;
        size_t len = qq.length() - 1;
        for (size_t i = 0; i <= len; i++)
        {
            cout << (int)qq[i];
            s += qq[i];
            if (i != len)
                cout << "+";
            else if (i <= len)
                cout << "=" << s << endl;
        }
        //cout << s << endl;
    }
}