#include <iostream>
using namespace std;

int length(string s)
{
    int i = 0;
    int count = 0;
    while (s[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}

string copy(string s)
{
    string s1;
    int i = 0;
    while (s[i] != '\0')
    {
        s1 += s[i];
        i++;
    }
    s1[i] = '\0';
    return s1;
}

string reverse(string s, int n)
{
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        char t = s[i];
        s[i] = s[j];
        s[j] = t;
    }
    return s;
}

string concat(string s, string str)
{
    int i = 0;
    int j = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    while (str[j] != '\0')
    {
        s += str[j];
        i++;
        j++;
    }
    s[i] = '\0';
    return s;
}

int main()
{
    string s = "Hello", str = " World";
    int n = length(s);
    cout << "Length of the String: " << n << endl;
    string s1 = copy(s);
    cout << "Copy of the string is: " << s1 << endl;
    s = reverse(s, n);
    cout << "Reverse of the string is: " << s << endl;
    s = reverse(s, n);
    s = concat(s, str);
    cout << "After Concatination: " << s << endl;
    return 0;
}