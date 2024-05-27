#include<stdio.h>
#include<string.h>

int main()
{
    int L, N, i, j;
    scanf("%d %d", &L, &N);
    char irr[L][50], plr[L][50], word[N][50];

    for(int i = 0; i < L; i++)
        scanf("%s %s", irr[i], plr[i]);
    for(int i = 0; i < N; i++){
        getchar();
        scanf("%[^\n]s", word[i]);

        for(j = 0; j < L; j++){
            if(strcmp(word[i], irr[j]) == 0){
                strcpy(word[i], plr[j]);
                break;
            }
        }
        if(j != L)
            continue;

        int len = strlen(word[i]);
        if(word[i][len-1] == 'y' && word[i][len-2] != 'a' && word[i][len-2] != 'e' && word[i][len-2] != 'i' && word[i][len-2] != 'o' && word[i][len-2] != 'u' && word[i][len-2] >= 'a' && word[i][len-2] <= 'z'){
                word[i][len-1] = '\0';
                strcat(word[i], "ies");
        }
        else if(word[i][len-1] == 'o' || word[i][len-1] == 's' || (word[i][len-2] == 'c' && word[i][len-1] == 'h') || (word[i][len-2] == 's' && word[i][len-1] == 'h') || word[i][len-1] == 'x')
            strcat(word[i], "es");
        else
            strcat(word[i], "s");
    }
    for(i = 0; i < N; i++)
        printf("%s\n", word[i]);

    return 0;
}
