#include <iostream>
#include <fstream>
#include <cctype> // for isspace function

using namespace std;

int main() {
    // Open the input file
    ifstream inputFile("input.txt");

    // Check if the input file is opened successfully
    if (!inputFile.is_open()) {
        cerr << "Error: Could not open the input file." << endl;
        return 1; // Exit with an error code
    }

    // Open the output file
    ofstream outputFile("output.txt");

    // Check if the output file is opened successfully
    if (!outputFile.is_open()) {
        cerr << "Error: Could not open the output file." << endl;
        inputFile.close(); // Close the input file
        return 1; // Exit with an error code
    }

    // Process each character in the input file
    char ch;
    while (inputFile.get(ch)) {
        // Check if the character is not a white space
        if (!isspace(ch)) {
            // Write the non-white space character to the output file
            outputFile.put(ch);
        }
    }

    // Close the input and output files
    inputFile.close();
    outputFile.close();

    cout << "White spaces removed and content saved to output.txt." << endl;

    return 0; // Exit successfully
}
