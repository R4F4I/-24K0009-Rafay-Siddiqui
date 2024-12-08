/*

? |

? | You're building an inventory system for a pet shop called "Pets in Heart" that keeps track of
? | different species of animals and their specific supplies (e.g., food, toys, bedding). The shop
? | inventory system uses a 2D dynamic array char** speciesSupplies where:
? |     o Rows are explicitly set for each species (e.g., "Dogs", "Cats", "Parrots"), and each row
? |       corresponds to a different species.
? |     o Columns are dynamically allocated for each species to hold their specific supplies (e.g.,
? |       "Food," "Leash," "Toys").
? | 
? | Task:
? | 
? | Write a C program that:
? | 
? |     1. Initialize the Inventory: Allocate memory for a specified number of species, with each
? |        species having its own list of supplies (initially empty).

? |     2. Add Supplies: For each species, dynamically allocate memory for a list of supplies and allow
? |        the user to add supplies for that species.

? |     3. Update Supplies: Let users update the name of a supply item for a specific species.

? |     4. Remove Species: Allow users to delete a species and free the associated memory (both for
? |        the species and its supplies).

? |     5. Display Inventory: Show the current supplies for each species in the inventory.


* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A


*/

/* 


species supplies

         sp1 sp2 sp3 sp4 sp5 sp6 sp7 sp8

pet1    |   |   |   |   |   |   |   |
pet2    |   |   |
pet3    |   |   |   |   |   |
pet4    |   |   |   |   |   |   |   |   |
pet5    |   |   |   |   |   |
pet6    |   |   |   |







 */



#include <stdio.h>
#include <stdlib.h>

                        // 3rd pointer added to point to the dynamic 2D arr
void initializeInventory(char ***speciesSupplies,int petsNum){
    int i;
    // used calloc to prevent garbage values
    *speciesSupplies = calloc(petsNum,sizeof(char*));
}


// add suppNum supplies for ith pet
void AddSupplies(char ***speciesSupplies, int i,int suppNum){
    int j;
    // each pet will have custom list of supplies extra 1 to occupy for '\0' to occupy
    (*speciesSupplies)[i] = calloc(suppNum+1,sizeof(char));

    getchar();

    for (j = 0; j < suppNum; j++)
    {
        printf("    Add supply %d for pet %d: ",j+1,i+1);
        scanf("%c",&(*speciesSupplies)[i][j]);
        getchar();
    }
    (*speciesSupplies)[i][suppNum] = '\0'; // add null char to end of string
}


void updateSupplies(){}
void removeSpecies(char **speciesSupplies, int pet,int petsNum){
    int i,j=0;
    // overwrite the removed pet's supplies with the next pet's supplies
    // then free memory of the last array
    for (i = pet; i < petsNum - 1; i++)
    {
        speciesSupplies[i] = speciesSupplies[i + 1];
    }
    free(speciesSupplies[petsNum]);
}

void displayInventory(char **speciesSupplies, int petsNum){
    int i,j=0;
    printf("\n\n");
    for ( i = 0; i < petsNum; i++)
    {
        printf("pet%d   ",i+1);
        j = 0;
        if (speciesSupplies[i] != NULL && speciesSupplies[i][0] != '\0') {
            j = 0;
            while (speciesSupplies[i][j] != '\0') {
                printf("| %c ", speciesSupplies[i][j]);
                j++;
            }
        } else {
            printf("No supplies");
        }
        printf("\n");
    }
}


void freeMem(char **speciesSupplies,int petsNum, int suppNum){
    int i;
    for (i = 0; i < petsNum; i++) {
        free(speciesSupplies[i]); // Free each row
    }
    free(speciesSupplies); // Free the array of pointers
}


int main(){

    int petsNum = 5;
    int suppNum;
    int i,j;
    char **speciesSupplies;

    // init
    initializeInventory(&speciesSupplies,petsNum);
    
    // add supplies for all pets
    for (i = 0; i < petsNum; i++)
    {
        printf("enter the number of supplies for pet %d: ",i+1);
        scanf("%d",&suppNum);
        AddSupplies(&speciesSupplies,i,suppNum);
    }
    


    
    
    printf("\n\nInventory:\n\n");
    displayInventory(speciesSupplies,petsNum);
    
    
    
    printf("\n\nremoving a specie...\n\n");
    removeSpecies(speciesSupplies,3,petsNum);
    printf("\nsuccess!");

    
    printf("\n\nInventory:\n\n");
    displayInventory(speciesSupplies,petsNum);
    
    
    
    freeMem(speciesSupplies,petsNum,suppNum);
    return 0;
}