#include <stdio.h>

int main() {
#ifdef __STDC_VERSION__
    long version = __STDC_VERSION__;
    
    if (version == 199409L) 
        printf("Standard: C94/C95\n");
    else if (version == 199901L) 
        printf("Standard: C99\n");
    else if (version == 201112L) 
        printf("Standard: C11\n");
    else if (version == 201710L) 
        printf("Standard: C17/C18\n");
    else if (version > 201710L)
        printf("Standard: C23 (or newer)\n");
    else
        printf("Standard: Post-C89, Version: %ld\n", version);
#else
    printf("Standard: C89/C90\n");
#endif
    return 0;
}