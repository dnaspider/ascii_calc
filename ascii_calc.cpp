#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "ASCII Code Calculator\nInput a string and press ENTER.\nPress ENTER to exit." << endl;

    string qq{};
    while (1)
    {
        getline(cin, qq);
        int s{};
        size_t len = qq.length() - 1;
        if (len + 1 == 0) break;
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