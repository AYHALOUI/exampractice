#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int count_words(char *str, char c)
{
    int i;
    bool find;
    int count;

    i = 0;
    find  = false;
    count = 0;
    if (!str)
        return (1);
    while (str[i] == c)
        i++;
    while (str[i])
    {
        if (str[i] == c)
        {
            find = true;
        }
        else if (str[i] && find == true)
        {
            find = false;
            count++;
        }
        i++;
    }
    return (count + 1);
}

int get_size_word(char *str, char c, int pos)
{
    int i;
    int size;

    i = 0;
    size = 0;
    while (str[i] && str[i] == c)
        i++;
    while (pos)
    {
        while (str[i] && str[i] != c)
            i++;
        while (str[i] && str[i] == c)
            i++;    
        pos--;
    }
    while (str[i] && str[i] != c)
    {
        size++;
        i++;
    }
    return (size);
}

char *get_word(char *str, char c, int pos)
{
    int i;
    char *word;
    int size_word;
    int j;

    i = 0;
    size_word = get_size_word(str, c, pos);
    word = malloc(size_word);
    if (!word)
        return (NULL);
    while (str[i] && str[i] == c)
        i++;
    while (pos)
    {
        while (str[i] && str[i] != c)
            i++;
        while (str[i] && str[i] == c)
            i++;    
        pos--;
    }

    j = 0;
    while (j <= size_word)
    {
        word[j] = str[i];
        j++;
        i++;
    }
    word[size_word] = '\0';
    return (word);
}

char **split(char *str, char c)
{
    char **split;
    int len;
    int i;

    len = count_words(str, c);
    split = malloc(sizeof(char *) * (len + 1));
    i = 0;
    if (!split)
        return (NULL);
    while (i < len)
    {
        split[i] = get_word(str, c, i);
        i++;
    }
    split[len] = 0;
    return (split);
}
int main()
{
    int i;
    char **str = split("      aymene   efd  haloui dhdhd    ", ' ');
    i = 0;

    while (str[i])
    {
        printf("%s\n", str[i]);
        i++;
    }
}