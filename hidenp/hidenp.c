#include <unistd.h>

int		main(int argc, char **argv)
{
    char *s1 = argv[1];
    char *s2 = argv[2];

    if (argc == 3)
    {
        while (*s1 != '\0')
        {
            while (*s2 != *s1 && *s2 != '\0')
                s2++;
            if (*s2 == '\0')
                return (write (1, "0", 1));
            s2++;
            s1++;
        }
        return (write (1, "1", 1));
    }
    write (1, "\n", 1);
}
// int main (int ac, char **av)
// {
//     char *s1 = av[1];
//     char *s2 = av[2];
//     int i = 1;
//     int j = 0;

//     if (ac == 3)
//     {
//         while (*s1)
//         {
//             while (s2[j] != '\0')
//             {
//                 if (s1[i] == s2[j])
//                     return (write (1, "0\n", 2));
//                 if (s1[0] == s2[j])
//                     return (write (1, "1\n", 2));
//                 j++;
//             }
//             i++;
//         }
//     }
//     write (1, "\n", 1);
// }


