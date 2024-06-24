
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "libft.h"
// int main(void)
// {
//     // FILE *f = fopen("example.txt", "w");
//     int fd = open("example.txt", O_WRONLY | O_CREAT, 0644);
//     if (fd == -1)
//     {
//         printf("Error opening file!\n");
//         exit(1);
//     }

//     /* print some text */
//     // const char *text = "Write this to the file";
//     ft_putnbr_fd(42,fd);

//     close(fd);
// }


int main(void) 
{	
    char *t1 = "Hello World!";
	t_list *node = ft_lstnew(t1);

    if(!node)
    {
        printf("failed allocation");
    }

    printf("%s\n",(char *)node->content);

    free(node);


}



