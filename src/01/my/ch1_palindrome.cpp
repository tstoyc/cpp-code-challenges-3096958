#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>
int main() 
{
    std::string s;
    std::cout << "Enter string: ";
    std::getline(std::cin, s);
    std::transform(s.begin(), s.end(), s.begin(), tolower);
    bool is_p = true;
    int n = s.length();
    for (int i=0; i<n/2; ++i)
        if (s[i] != s[n-1-i]) {
            is_p = false;
            break;
        }
    std::cout << "\"" << s << "\" is " << (is_p? "": "not ") << "a palindrome!\n";
}