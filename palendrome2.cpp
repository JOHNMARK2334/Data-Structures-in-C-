
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str;
    int length;
    bool isPalindrome = true;

    cout << "Enter a word: ";

    getline(cin, str);

    length = str.length();

    for (int i = 0; i < (length / 2); i++)
    {
        if (str[i] != str[(length - 1) - i])
            isPalindrome = false;
    }

    if (isPalindrome == true)
        cout << str << " is a palindrome" << endl;

    else
        cout << str << " is not a palindrome" << endl;

//new text begins here
    return 0;
//new text ends here
}
