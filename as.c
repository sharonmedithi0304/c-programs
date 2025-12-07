
#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Banyan";
    

    char *p = strrchr(str1,'a');
    printf("%s",p);

   
    return 0;
}

