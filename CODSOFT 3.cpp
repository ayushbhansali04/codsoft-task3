//TASK 4 COUNTING THE NUMBER OF WORDS IN GIVEN FILE  


#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int countWords(const string& fileName) {
    ifstream inputFile(fileName);
    if (!inputFile.is_open()) {
        cerr << "Error: Unable to open file " << fileName << endl;
        return -1; // Return -1 to indicate an error
    }

    string word;
    int wordCount = 0;

    while (inputFile >> word) {
        ++wordCount;
    }

    inputFile.close();
    return wordCount;
}

int main() {
    string fileName;

    cout << "Enter the name of the text file: ";
    cin >> fileName;

    int wordCount = countWords(fileName);

    if (wordCount != -1) {
        cout << "Total word count in file " << fileName << ": " << wordCount << endl;
    }

    return 0;
}