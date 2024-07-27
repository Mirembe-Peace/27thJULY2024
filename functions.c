#include <stdio.h>

//Function prototypes
float ReadVal (void);
float FtoC (float Q);
void PrintResult (float x, float y);

//main function
int main (void){
    float STOP, F,C;
    /*The W is stored here*/

    STOP = ReadVal();

    printf("           F           C\n");
    printf("           =           =\n");
    for(F=1; F<=STOP; F++){
/*We pass the value of F in the loop to FtoC
to do the calculation, the value returned by 
FtoC is stored here in C*/
    C = FtoC(F);

/*We pass F and C to do the printing 
F and C are the arguments and x and y
are the parameters*/
    PrintResult (F,C);

    }
    return 0;
}

/*printing the first statement and letting
the user input the value is ddone by this function*/
float ReadVal (void){
    float W;
    printf("Enter STOP value:  ");
    scanf("%f",&W);
    
    /*The value W the user enters is stored in STOP
    in the main function*/
    return (W);
}

/*Function to do the conversion*/
float FtoC (float Q){
    return((Q - 32) / 1.8);
}

void PrintResult (float x, float y){
    printf("%11.2f %10.2f\n",x,y);
}