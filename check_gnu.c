#include <stdio.h>

int main() {
    printf("--- Compiler & Language Info ---\n");

    // Identify the Compiler
    #if defined(__clang__)
        printf("Compiler: Clang (%d.%d.%d)\n", __clang_major__, __clang_minor__, __clang_patchlevel__);
    #elif defined(__GNUC__)
        printf("Compiler: GCC (%d.%d.%d)\n", __GNUC__, __GNUC_MINOR__, __GNUC_PATCHLEVEL__);
    #elif defined(_MSC_VER)
        printf("Compiler: MSVC (Version: %d)\n", _MSC_VER);
    #else
        printf("Compiler: Unknown\n");
    #endif

    // Identify Extension Dialects
    #if defined(__GNU_VISIBLE) || defined(__GNUC__)
        printf("Extensions: GNU Extensions Enabled\n");
    #else
        printf("Extensions: Strict Standard Mode\n");
    #endif

    // Identify Standard Version
    #ifdef __STDC_VERSION__
        printf("C Standard Value: %ld\n", __STDC_VERSION__);
    #else
        printf("C Standard Value: < C89/90 (or not defined)\n");
    #endif

    return 0;
}