#include<stdio.h>
#include <ctype.h>

void lexemes(char input[])
{
    int tokenCount = 0;
    int i=0;
    char lexeme[100];
    while(input[i]!='\0')
    {
        if(isspace(input[i])){
            i++;
            continue;
        }

        if(input[i]=='/' && input[i+1]=='/')
        {
            i+=2;
            printf("Single Line Comment Found: ");
            while(input[i]!='\n' && input[i]!='\0')
            {
                printf("%c",input[i] );
                i++;
            }
            printf("\n");
        }

        if(isalnum(input[i]))
        {
            int j=0;
            // 1️⃣ Handle alphanumeric strings (identifiers or numbers)
            while(isalnum(input[i]))
            {
                // 2️⃣ Build the lexeme
                lexeme[j++] = input[i++];
            }
            lexeme[j] = '\0';
            tokenCount++;
            printf("%s\n",lexeme);
        }
        else if (input[i]=='(' || input[i] ==')' || input[i] == '=' || input[i] == '+' || input[i] == '-'
                 || input[i] == '*' || input[i] == '/' || input[i] == ',' || input[i] == ';'
                 || input[i] == '{' || input[i] == '}' || input[i] == '.')
                 {
                     printf("%c\n",input[i]);
                     i++;
                     tokenCount++;
                 }

    }
    printf("\nTotal Tokens = %d\n", tokenCount);
}
int main()
{
    char code[100];
    printf("Enter a Multiline string and press $ to end input:\n");
    scanf("%[^$]s",code);
    lexemes(code);
}