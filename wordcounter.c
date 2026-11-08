#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(void){
    char line[10005];
    char words[1000][105];
    char word[105];
    int count=0;
    char *p;
    if(fgets(line,sizeof(line),stdin)==NULL){
        printf("0\n");
        return 0;
    }
    p=line;
    while (*p != '\0')
    {
        if (isalpha((unsigned char)*p))            
        {
            int i = 0, j, found = 0;
            while (isalpha((unsigned char)*p))     
            {
                if (i < 104)
                    word[i++] = (char)tolower((unsigned char)*p);
                p++;
            }
            word[i] = '\0';

            for (j = 0; j < count; j++)            
            {
                if (strcmp(word, words[j]) == 0)
                {
                    found = 1;
                    break;
                }
            }
            if (!found)                            
            {
                strcpy(words[count], word);
                count++;
            }
        }
        else
        {
            p++;             
        }
    }
    printf("%d\n", count);
    return 0;

}