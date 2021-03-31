#include <stdio.h>
#include <string.h>
int main()
{
    int n ;
    scanf("%d",&n);
    char names[n][1000];
    char temp[1000];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", names[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            'A'=='a';
            if (strcmp(names[j], names[j + 1]) == 1)
            {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", names[i]);
    }
}
