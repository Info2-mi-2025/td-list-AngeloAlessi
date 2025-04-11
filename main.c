#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Ne pas modifier
void init_file()
{
    // data.txt
    FILE* f = fopen("data.txt", "w");
    if (f)
    {
        fprintf(f, "5\n12\n8\n1\n19\n");
        fclose(f);
    }

    // data2.txt
    f = fopen("data2.txt", "w");
    if (f)
    {
        fprintf(f, "10\n20\n30\n");
        fclose(f);
    }

    // data3.txt
    f = fopen("data3.txt", "w");
    if (f)
    {
        fprintf(f, "1\n2\n3\n4\n5\n");
        fclose(f);
    }

    // data_vide.txt
    f = fopen("data_vide.txt", "w");
    if (f)
    {
        fclose(f);  // fichier vide
    }
}



typedef struct Node
{
    int value;
    struct Node* next;
} Node;

typedef struct
{
    Node* head;
    Node* tail;
} List;

// Fonctions de base
void append(List* list, int value)
{
}

void free_list(List* list)
{
}

void print_list(const List* list)
{
}

void reverse_list(List* list)
{
}

int sum_list(const List* list)
{
    return 0;
}

int min_list(const List* list)
{

    return 0;
}

int max_list(const List* list)
{
    return 0;
}

void filter_list(List* list, int threshold)
{
}

void version()
{
    printf("version 1.0");
    return 0;
}

void help()
{
    printf("Utilisation : ./app <fichier> [options]\n\n");
    printf("Options disponibles :\n");
    printf("  --reverse         Inverse l'ordre des éléments\n");
    printf("  --sum             Affiche la somme des éléments\n");
    printf("  --filter <val>    Filtre les éléments >= val\n");
    printf("  --add <val>       Ajoute une valeur à la fin du fichier\n");
    printf("  --help            Affiche ce message d'aide\n");
    printf("  --version, -v     Affiche la version du programme\n");
    printf("  --min             Affiche la valeur minimale de la liste\n");
    printf("  --max             Affiche la valeur maximale de la liste\n");
    return 0;
}

// Lecture fichier
bool read_file(const char* filename, List* list)
{
    FILE* f = fopen(filename, "r");
    if (!f) return false;
    int value;
    
    while (fscanf(f, "%d", &value) == 1) append(list, value);
    
    fclose(f);
    return true;
}

bool add_to_file(const char* filename, int value)
{
    FILE* f = fopen(filename, "a");
    if (!f) return false;
    fprintf(f, "%d\n", value);
    fclose(f);
    return true;
}

int main(int argc, char* argv[])
{
    // Ne pas modifier
    init_file();
    // ---------------
    if(argc < 2) return 1;

    bool option_add = false;
    bool fichier = false;
    char* filearg = NULL;
    List liste = {NULL, NULL};

    for (int i = 0; i < argc; i++)
    {
        if (strcmp(argv[i],"--add")== 0){
            option_add = true;
        }
        
        else if(strcmp(argv[i],"--help")== 0) {
            help();
        }
        else if(strcmp(argv[i],"--version")== 0 || strcmp(argv[i],"-v")== 0){
            version();          
        }
        else if(strcmp(argv[i],"--reverse")== 0){
            reverse_list(&liste);
        }
        else if(strcmp(argv[i],"--sum")== 0){
            sum_list(&liste);
        }
        else if (strcmp(argv[i],"--min")== 0)
        {
            min_list(&liste);
        }
        else if (strcmp(argv[i],"--max")== 0)
        {
            max_list(&liste);
        }
        
       else{
        filearg* = argv[i];
        fichier = true;
       }
    }  
    if (fichier == NULL)
    {
        return 2;
    }
    FILE* filename = fopen(filearg,"r");
    if (filename == NULL)
    {
        return 2;
    }
    
    
    
    int val = 0;
    char ligne[256];
    while (fgets(ligne,sizeof(ligne),f))
    {
        if (sscanf(ligne,"&d",&val)==1)
        {
            list[size].value = val;
            size++;
        }
        
    }
    
    
    
    return 0;
}
typedef struct {
    int value;
} Element;

