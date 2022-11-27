#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    uid_t uid = getuid();
    uid_t euid = geteuid();
    printf("uid is %d, and euid is %d \n", uid, euid);
    system("pause");
    return 0;
}