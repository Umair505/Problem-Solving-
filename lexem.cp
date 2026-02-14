#include <bits/stdc++.h>
using namespace std;

bool isValidVar(string &word, set<string> &kw)
{
    if (kw.count(word))
    {
        return false;
    }
    if (!isalpha(word[0]) && word[0] != '_')
        return false;
    for (char c : word)
    {
        if (!isalnum(c) && c != '_')
            return false;
    }
    return true;
}

int main()
{
    ifstream inputFile("input.txt");

    set<string> kw = {"int", "bool", "return"};
    set<string> variables;
    set<char> operators = {'=', '+', '-', '*', '/'};

    string line;
    string Functions, Variables, Keywords, Operators, Digits, Others;

    while (getline(inputFile, line))
    {

        stringstream ss(line);
        string word;

        while (ss >> word)
        {
            if (word == "main()")
            {
                Functions = "main()";
            }
            else if (kw.count(word))
            {
                Keywords += word + ",";
            }
            else if (isValidVar(word, kw))
            {
                if (variables.insert(word).second)
                {
                    Variables += word + ",";
                }
            }
        }
        for (char ch : line)
        {

            // operator
            if (operators.count(ch))
            {
                Operators += ch;
                Operators += ",";
            }
            // digit
            else if (isdigit(ch))
            {
                Digits += ch;
                Digits += ",";
            }
            // others
            else if (ch == '{' || ch == '}' || ch == ';')
            {
                Others += ch;
                Others += ",";
            }
        }
    }

    inputFile.close();
    // Remove trailing commas and spaces
    if (!Keywords.empty())
        Keywords.pop_back();
    if (!Operators.empty())
        Operators.pop_back();
    if (!Variables.empty())
        Variables.pop_back();
    if (!Digits.empty())
        Digits.pop_back();
    if (!Others.empty())
        Others.pop_back();

    cout << "function:" << Functions << endl;
    cout << "operator:" << Operators << endl;
    cout << "variable:" << Variables << endl;
    cout << "keyword:" << Keywords << endl;
    cout << "digits:" << Digits << endl;
    cout << "other:" << Others << endl;

    return 0;
}
