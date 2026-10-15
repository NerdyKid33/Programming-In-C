#include <stdio.h>

float calculate_celsius(int fahr){
    return 5.0 / 9.0 * (fahr - 32);
}

int main(){
    int fahr; float celsius; 
    int lower, upper, step;

    lower = 0; 
    upper = 300; 
    step = 20;

    for (int fahr = 0; fahr<=300; fahr++){
        printf("%-5d %.2f \n",fahr, calculate_celsius(fahr));
        fahr = fahr + step;
    }
}