/*

? |Write a program which perform following operations
? | * Dynamically allocate memory to read the contents of a file of unknown size.
? | * Resize the buffer as needed while reading.
? | * Count the frequency of each word in the file.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A


*/



# include <stdio.h>
# include <string.h>
# include <stdlib.h>

# define FILENAME "file.txt"
# define BUFF_SIZE 15

struct word_freq
{
    char word[10];
    int freq;
};


void word_freq(char sentence[]){
    int i=0,j=0,space=0;
    char word[20];

    // approximate words in sentence
    while (sentence[i]!='\0')
    {
        if (sentence[i]== ' ')space++;
        i++;
    }
    // printf("space: %d",space);


    // init arr of type struct of size 'space'
    struct word_freq *arr = calloc(space,sizeof(struct word_freq));
    
    for (i = 0; i < space; i++)
    {
        // move to the last space in arr
        j=0;
        while (arr[j].freq!=0)
        {
           j++;
        }
        // form word from sentence
        int k=0;
        while(sentence[k]!=' ' && sentence[k]!='\0')
        {
            word[k]=sentence[k];
            k++;
        }
        arr[j].word[k]='\0';
        arr[j].freq++;
        k++;
        
        
        // printf("%d ",arr[i].freq);
    }
    

}

int main(){
    int i=0;
    FILE *fp;
    fp = fopen(FILENAME,"r");


    int buffer_size = BUFF_SIZE;
    // will hold words
    char *buffer   = malloc(buffer_size*sizeof(char));
    
    // used calloc to initialise values in the allocated mem block to prevent garbage values
    char *sentence = calloc(buffer_size,sizeof(char));
    char *temp = malloc(buffer_size*sizeof(char));



    while (fscanf(fp,"%s",buffer)!=EOF)
    {
        // buffer resize
        if (strlen(sentence)+strlen(buffer)+2>buffer_size)
        {
            buffer_size *=2;
            // realloc returns a pointer to the reallocated memory block
            char *temp = realloc(sentence,buffer_size*sizeof(char));
            // error handling
            if (temp == NULL) {
                printf("Failed to reallocate memory\n");
                free(buffer);
                free(sentence);
                fclose(fp);
                return 1;
            }
            
            // update the sentence pointer
            sentence = temp;
        }

        strcat(sentence,buffer);
        strcat(sentence," ");
    }


    printf("%s ",sentence);
    printf("\nsuccessfully read file...\n");


    word_freq(sentence);


    free(buffer);
    free(sentence);
    fclose(fp);

    return 0;
}