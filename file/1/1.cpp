#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool isValidEmail(string email) {
    int atPos = email.find('@');
    int dotPos = email.rfind('.');
    if (atPos == string::npos || dotPos == string::npos) {
        return false;
    }
    if (dotPos - atPos < 2 || dotPos == email.length() - 1) {
        return false;
    }
    return true;
}

int main() {
    ifstream inFile("emails.txt");
    ofstream outFile("result.txt");
    if (!inFile || !outFile) {
        cout << "error!" << endl;
        return 1;
    }
    string email;
    while (inFile >> email) {
        if (isValidEmail(email)) {
            outFile << email << "valid" << endl;
        } else {
            outFile << email << "not valid" << endl;
        }
    }
    inFile.close();
    outFile.close();
    return 0;
}