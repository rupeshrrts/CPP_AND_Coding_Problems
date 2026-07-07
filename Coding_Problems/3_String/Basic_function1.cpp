
// // 1 strcpy
// #include <stdio.h>
// #include <conio.h>
// #include <cstring>

// void mystrcpy(char *dest, char *src)
// {
//     while (*src != '\0')
//     {
//         *dest++ = *src++;
//     }
//     *dest = '\0';
// }

// int main()
// {
//     char str[20] = "Rupesh";
//     char str2[20] = "KumarSingh";
//     puts(str);
//     puts(str2);

//     mystrcpy(str, str2);
//     puts(str);
// }

// // 2 strlen

// #include <stdio.h>
// #include <conio.h>
// #include <cstring>

// int mystrlen(const char *src)
// {
//     int count = 0;
//     while (*src != '\0')
//     {
//         count++;
//         src++;
//     }
//     return count;
// }

// int main()
// {
//     char str2[20] = "KumarSingh";
//     puts(str2);
//     printf("%d\n", mystrlen(str2));
//     printf("%d", mystrlen(str2 + 2));
// }

// // 3 strrev
// #include <stdio.h>
// #include <conio.h>
// #include <cstring>

// // char *strrev(char *str)
// void mystrrev(char *str)
// {
//     int l = strlen(str);
//     int s = 0;
//     int e = l - 1;

//     while (s <= e)
//     {
//         char temp = str[s];
//         str[s] = str[e];
//         str[e] = temp;
//         s++, e--;
//     }
// }

// int main()
// {
//     char str2[20] = "KumarSingh";
//     puts(str2);
//     mystrrev(str2);
//     printf("%s\n", str2);
//     printf("%s", str2 + 2);
// }

// // 4 strcat
// #include <stdio.h>
// #include <conio.h>
// #include <cstring>

// void mystrcat(char *dest, const char *str)
// {
//     // Move dest to end of existing string
//     while (*dest != '\0')
//     {
//         dest++;
//     }

//     // Copy str to dest
//     while (*str != '\0')
//     {
//         *dest = *str;
//         dest++;
//         str++;
//     }

//     // Add null terminator
//     *dest = '\0';
// }

// int main()
// {
//     char str[7] = "RKuuuu";
//     char str2[20] = "KumarSingh";
//     mystrcat(str2, str);
//     puts(str2);
// }

// // 4 strcat
// #include <stdio.h>
// #include <string.h>

// void mystrupr(char *str)
// {
//     int l = strlen(str);
//     for (int i = 0; i < l; i++)
//     {
//         if (str[i] >= 'a' && str[i] <= 'z')
//         {
//             str[i] = str[i] - 32;
//         }
//     }
// }

// void mystrlwr(char *str)
// {
//     int l = strlen(str);
//     int i = 0;
//     while (str[i] != '\0')
//     {
//         if (str[i] >= 'A' && str[i] <= 'Z')
//         {
//             str[i] = str[i] + 32;
//         }
//         i++;
//     }
// }

// int main()
// {

//     char str2[20] = "KumarSingh";
//     mystrupr(str2);
//     puts(str2);
//     mystrlwr(str2);
//     puts(str2);
// }

// // 6 strcat
// #include <stdio.h>
// #include <string.h>

// int mystrcmp(char *dest, char *str)
// {
//     // if mathc all the char of the string then return -1 otherwise return diff.

//     int diff = 0;
//     while (*str != '\0' || *dest != '\0')
//     {
//         if (*str != *dest)
//         {
//             int diff = *str - *dest;
//             return diff;
//         }
//         str++;
//         dest++;
//     }
//     return -1;
// }

// int main()
// {
//     char str1[20] = "KumarSingh";
//     char str2[20] = "Kumangh";
//     printf("%d", mystrcmp(str1, str2));
// }

// 7 mystrstr

#include <stdio.h>
#include <string.h>
#include <stdio.h>

char *mystrstr(const char *str, const char *substr)
{
    // If substring is empty
    if (*substr == '\0')
        return (char *)str;

    while (*str != '\0')
    {
        const char *p1 = str;
        const char *p2 = substr;

        // Compare characters
        while (*p1 == *p2 && *p2 != '\0')
        {
            p1++;
            p2++;
        }

        // If full substring matched
        if (*p2 == '\0')
            return (char *)str;

        str++;
    }

    return NULL;
}
int main()
{
    char str1[] = "Kumar Singh";
    char str2[] = "Singh";

    char *result = mystrstr(str1, str2);

    if (result != NULL)
    {
        printf("Found at index: %ld\n", result - str1);
    }
    else
    {
        printf("Not found\n");
    }
}