#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    int x, y, command;
    string data;

    ofstream file("flight_data.txt", ios::app);

    if (!file.is_open())
    {
        cout << "error" << endl;
        return 0;
    }

    while (true)
    {
        cout << " (x y): ";
        getline(cin, data);

        if (data.empty())
            break;

        sscanf_s(data.c_str(), "%d %d %d", &x, &y, &command);
        file << x << " " << y << " " << command << endl;
    }

    file.close();

    cout << "rdy" << endl;

    return 0;
}