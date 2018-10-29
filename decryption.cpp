/*
Author: Tristan O'Neil
Program: Decrypts OEcrypt
Arguments: encryptedFile plainTextFile encryptionKey
*/


#include <iostream>
#include <fstream>
#include <string>
#include <bitset>

using namespace std;

int decryptReplacement(char eLetter);

int main(int argc, char *argv[])
{
    ifstream input;
    ofstream output;

    if (argv[1] != NULL && argv[2] != NULL && argv[3] != NULL)
    {
        string encryptedFile = argv[1];
        string plainTextFile = argv[2];
        string key = argv[3];
        string inputText = "";
        char decryptedText;
        int asciiCode = 0;

        input.open(encryptedFile);
        output.open(plainTextFile);
        if (input.is_open())
        {
            while (!input.eof())
            {
                getline(input, inputText);
                int y = 0;
                for (int x = 0; x < inputText.size(); x++)
                {
                    asciiCode = decryptReplacement(inputText[x*2]);
                    asciiCode = asciiCode * 26;
                    asciiCode = asciiCode + decryptReplacement(inputText[(x*2)+1]);
                    if (static_cast<char>(asciiCode)>255)
                    {
                        asciiCode = 255;
                    }
                    decryptedText = static_cast<char>(asciiCode);
                    decryptedText = decryptedText ^ key[y];
                    output << decryptedText;
                    if (key.size()-1 > y)
                    {
                        y++;
                    }
                    else
                    {
                        y = 0;
                    }
                    if ((x*2) + 2 >= inputText.size())
                    {
                        x = inputText.size();
                    }
                }
            }
        }
    }
    input.close();
    output.close();

    return 0;
}

int decryptReplacement(char eLetter)
{
    int ascii;
    switch (eLetter)
    {
        case 'a':
            ascii = 0;
            break;
        case 'b':
            ascii = 1;
            break;
        case 'c':
            ascii = 2;
            break;
        case 'd':
            ascii = 3;
            break;
        case 'e':
            ascii = 4;
            break;
        case 'f':
            ascii = 5;
            break;
        case 'g':
            ascii = 6;
            break;
        case 'h':
            ascii = 7;
            break;
        case 'i':
            ascii = 8;
            break;
        case 'j':
            ascii = 9;
            break;
        case 'k':
            ascii = 10;
            break;
        case 'l':
            ascii = 11;
            break;
        case 'm':
            ascii = 12;
            break;
        case 'n':
            ascii = 13;
            break;
        case 'o':
            ascii = 14;
            break;
        case 'p':
            ascii = 15;
            break;
        case 'q':
            ascii = 16;
            break;
        case 'r':
            ascii = 17;
            break;
        case 's':
            ascii = 18;
            break;
        case 't':
            ascii = 19;
            break;
        case 'u':
            ascii = 20;
            break;
        case 'v':
            ascii = 21;
            break;
        case 'w':
            ascii = 22;
            break;
        case 'x':
            ascii = 23;
            break;
        case 'y':
            ascii = 24;
            break;
        case 'z':
            ascii = 25;
            break;
    }
    return ascii;
}
