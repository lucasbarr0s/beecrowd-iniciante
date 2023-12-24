#include <stdio.h>
#include <string.h>
int main() 
{
    char TIPO1[50], TIPO2[50], TIPO3[50];
    
    fgets(TIPO1, 50, stdin);
    fgets(TIPO2, 50, stdin);
    fgets(TIPO3, 50, stdin);
    
    TIPO1[strcspn(TIPO1, "\n")] = '\0';
    TIPO2[strcspn(TIPO2, "\n")] = '\0';
    TIPO3[strcspn(TIPO3, "\n")] = '\0';
    
    if (strcmp(TIPO1, "vertebrado") == 0) {
        if (strcmp(TIPO2, "ave") == 0){
            if (strcmp(TIPO3, "carnivoro") == 0){
                printf("aguia\n");
            } else if (strcmp(TIPO3, "onivoro") == 0){
                printf("pomba\n");
            }
        } else if (strcmp(TIPO2, "mamifero") == 0) {
            if (strcmp(TIPO3, "onivoro") == 0){
                printf("homem\n");
            } else if (strcmp(TIPO3, "herbivoro") == 0){
                printf("vaca\n");
            }            
        }
    } else if (strcmp(TIPO1, "invertebrado") == 0) {
        if (strcmp(TIPO2, "inseto") == 0){
            if (strcmp(TIPO3, "hematofago") == 0){
                printf("pulga\n");
            } else if (strcmp(TIPO3, "herbivoro") == 0){
                printf("lagarta\n");
            }
        } else if (strcmp(TIPO2, "anelideo") == 0) {
            if (strcmp(TIPO3, "hematofago") == 0){
                printf("sanguessuga\n");
            } else if (strcmp(TIPO3, "onivoro") == 0){
                printf("minhoca\n");
            }            
        }
    }
    return 0;
}

// que codigo ruim meu deus
