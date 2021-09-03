// 1 - program to read a file character by character, and display it simultaneously on the screen
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
    FILE *fp;
    int ch;
    char filename[20];
    printf("\n Enter the filename: "); // enter : file1_ex.txt
    gets(filename);
    fp = fopen(filename,"r");
    if(fp == NULL)
    {
        printf("\n Error opening the file");
        exit(1);
    }
    ch = fgetc(fp);
    while(ch != EOF)
    {
        putchar(ch);
        ch = fgetc(fp);

    }
    fclose(fp);
}
