#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;

    // go through each string in argv
    // why skip argv[0]?
    for(i =1; i<argc; i++)
    {
        printf("arg %d: %s\n", i, argv[i]);
    }
    
    //making array of strings
    char *cities[] = 
    {
        "Nagoya","Gifu","Nyeri","Nairobi"
    };

    int num_cities = 4;

    for(i=0; i<num_cities; i++)
    {
        printf("city %d: %s\n", i, cities[i]);
    }

    return 0;
}