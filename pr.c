#include <stdio.h>
#include <limits.h>

int main()
{
    char arr[5][5];
    int count = 1;
    char alph;
    int max = INT_MIN;
    char x;
    int length;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf(" %c", &arr[i][j]);
        }
    }
    // row chack!
    for (int i = 0; i < 5; i++)
    {
        count = 1;
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == arr[i][j + 1])
            {
                count++;
                alph = arr[i][j];
            }
            if (count > max)
            {
                max = count;
                x = alph;
                length = count;
            }

            if (arr[i][j + 1] != alph)
            {
                count = 1;
            }
        }
    }
    // column chack!

    for (int j = 0; j < 5; j++)
    {
        count = 1;
        for (int i = 0; i < 4; i++)
        {
            if (arr[i][j] == arr[i + 1][j])
            {
                count++;
                alph = arr[i][j];
            }
            if (count > max)
            {
                max = count;
                x = alph;
                length = count;
            }

            if (arr[i + 1][j] != alph)
            {
                count = 1;
            }
        }
    }
    // diagonal check

    for (int i = 0; i < 4; i++)
    {
        count = 1;
        for (int j = 0; j < 5-i-1; j++)
        {
            if (arr[j][j + i] == arr[j + 1][i + j + 1])
            {
                count++;
                alph = arr[j][j + i];
            }
            if (count > max)
            {
                max = count;
                x = alph;
                length = count;
            }

            if (arr[j + 1][i + j + 1] != alph)
            {
                count = 1;
            }
        }
    }
    // again diagonal chack

    for (int i = 1; i < 4; i++)
    {
        count = 1;
        for (int j = 0; j < 5-i-1; j++)
        {

            if (arr[i + j][j] == arr[i + j + 1][j + 1])
            {
                count++;
                alph = arr[i + j][j];
            }
            if (count > max)
            {
                max = count;
                x = alph;
                length = count;
            }

            if (arr[i + j + 1][j + 1] != alph)
            {
                count = 1;
            }
        }
    }

    // anti diagonal chack!

    for (int i = 1; i < 5; i++)
    {
        count = 1;

        for (int j = 0; j <= i; j++)
        {
            if (arr[i - j][j] == arr[i - j - 1][j+1])
            {
                count++;
                alph = arr[i-j][j];
            }
            if (count > max)
            {
                max = count;
                x = alph;
                length = count;
            }

            if (arr[i-j-1][j+1] != alph)
            {
                count = 1;
            }
        }
    }
    // again anti diagonal chack

    for (int i = 1; i < 5; i++)
    {
        count = 1;
        for (int j = 0; j < 5-i; j++)
        {
            if (arr[i + j][5 - 1- j] == arr[i + j + 1][5 - j - 2])
            {
                count++;
                alph = arr[i + j][5 - 1 - j];
            }
            if (count > max)
            {
                max = count;
                x = alph;
                length = count;
            }

            if (arr[i + j + 1][5 - j - 2] != alph)
            {
                count = 1;
            }
        }
    }
    if (length !=0 )
    printf("%c %d", x, length);


    return 0;
}