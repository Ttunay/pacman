#include "repository.h"
#include <stdio.h>
#include <string.h>

#define MAX_PKG 100

static PkgInfo packages[MAX_PKG];
static int pkg_count = 0;

void load_repository()
{
    printf("loading load_repository\n");
}

PkgInfo *get_pkg_info(const char *pkg_name){
    for(int i = 0; i<pkg_count;i++){
        if(strcmp(packages[i].name,pkg_name) == 0) {
            return &packages[i];
    }
}
return NULL;
}
void add_pkg(const PkgInfo *packege)
{
    if(pkg_count < MAX_PKG)
    {
        packages[pkg_count++] = *packege;
        printf("packege %s added\n",packege->name);
    } else {
        printf("repositore is full\n");
    }
}


void remove_pkg(const char *pkg_name)
{
    for(int i = 0;i<pkg_count;i++)
    {
        if(strcmp(packages[i].name,pkg_name)==0) 
        {
            for(int j = i;j<pkg_count -1; j++) 
            {
                packages[j] = packages[j + 1];
            }
            pkg_count--;
            printf("packege %s removed.\n",pkg_name);
            return;
        }
    }
    printf("packege %s not found\n ",pkg_name);
}