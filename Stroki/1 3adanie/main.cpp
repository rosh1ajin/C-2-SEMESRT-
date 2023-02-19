#include <iostream>
#include <string>
 
int main()
{
    std::string a = "hgr;klqlwlelrltly",b = "qwerty";
    bool f = true;
    for (int i=0; i<b.size(); i++)
    {
        if (a.find(b[i])==-1)
        {
            f = false;
            break;
        }
    }
    if (f)
        std::cout <<"Yes\n";
    else std::cout <<"No\n"; 
    return 0;
}