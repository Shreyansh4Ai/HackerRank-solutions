#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> rev;
    stringstream ss(str); // Create a stream from the string
    int num;
    char comma;

    while (ss >> num) {       // Read an integer
        rev.push_back(num);   // Store it in the vector
        ss >> comma;          // Skip the comma
    }

    return rev;
}

int main() {
    string str;
    cin >> str; // Input like: 23,4,56
    vector<int> integers = parseInts(str);

    for (int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
