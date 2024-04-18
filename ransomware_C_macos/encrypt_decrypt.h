//
//  encrypt_decrypt.h
//  ransomware_C_macos
//
//  Created by asap on 18/04/2024.
//

#ifndef encrypt_decrypt_h
#define encrypt_decrypt_h

void list_file_dir(char* location){
    struct dirent *dir;
    DIR *d=opendir(location);
    if(d){
        while((dir=readdir(d))!=NULL){
            printf("%s", dir->d_name);
        }
    }
    closedir(d);
}

#endif /* encrypt_decrypt_h */
