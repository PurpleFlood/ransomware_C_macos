//
//  main.c
//  ransomware_C_macos
//
//  Created by asap on 18/04/2024.
//

#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include "encrypt_decrypt.h"
#include "list_dir.h"

int main(int argc, const char * argv[]) {
    
    char* tableau[100];
    char* location="/Users/asap/Desktop/";
    list_file_dir(location);
    printf("%s", tableau);
    for(int i=0;i<100;i++){
        printf("%s\n", tableau[i]);
    }
    
    return 0;
}
