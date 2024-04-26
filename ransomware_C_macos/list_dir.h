//
//  list_dir.h
//  ransomware_C_macos
//
//  Created by asap on 18/04/2024.
//

#ifndef list_dir_h
#define list_dir_h

char* list_file_dir(char* location){
    struct dirent *dir;
    DIR *d=opendir(location);
    char* output[100];
    int i=0;
    if(d){
        while((dir=readdir(d))!=NULL){
            output[i]=dir->d_name;
            printf("%s\n", output[i]);
            i++;
        }
    }
    closedir(d);
    return output[];
}


#endif /* list_dir_h */
