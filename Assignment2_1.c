#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;

    char ch;
    int chars = 0, words = 0, lines = 0, ws = 0;

    file = fopen("./txt.txt", "r");

    if (file == NULL)
    {
        printf("\nUnable to open file.\n");
        printf("Please check if file exists and you have read privilege.\n");

        exit(0);
    }

    while ((ch = fgetc(file)) != EOF)
    {
        chars++;

        if (ch == '\n' || ch == '\0')
            lines++;

        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
            words++;
        if (ch == ' ')
            ws++;
    }

    if (chars > 0)
    {
      words++;
      lines++;

    }

    printf("\n");
    printf("total characters = %d\n", chars);
    printf(" total lines = %d\n", words);
    printf(" total lines = %d\n", lines);
    printf("total Whitespaces = %d\n", ws);

    fclose(file);
    return 0;
 }
