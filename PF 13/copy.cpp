
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function to display words with fewer than 4 characters
void displayWords(string fileName) {
    ifstream file(fileName);  // Open the file

    // Check if the file was opened successfully
    if (!file.is_open()) {
        cout << "Could not open the file " << fileName << endl;
        return;
    }

    string line;
    
    // Read each line from the file
    while (getline(file, line)) {
        string word = "";  // To store each word
        
        // Process each character of the line
        for (int i = 0; i < line.length(); i++) {
            char ch = line[i];

            // If the character is a space, we have reached the end of a word
            if (ch == ' ' || ch == '\t') {
                if (word.length() > 0 && word.length() < 4) {
                    cout << word << endl;  // Display word if it has less than 4 characters
                }
                word = "";  // Reset the word
            } else {
                // Add the character to the word
                word += ch;
            }
        }
        
        // Check the last word in case there's no space after it
        if (word.length() > 0 && word.length() < 4) {
            cout << word << endl;
        }
    }

    // Close the file after reading
    file.close();
}

int main() {
    // Call the function with the filename
    displayWords("Task11.txt");
    return 0;
}
