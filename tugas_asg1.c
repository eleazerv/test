#include <stdio.h> 


// pseudo code calculating the area of a recatangle 
// input length and width 
// calculate the area = length * width
// print the area
//

void square(float length, float width) {
    float area = length * width ;
    printf("the area of the square is %.2f \n", area) ;
}

int main() { 
    //task 1 
    float length = 3 ; 
    float width = 5 ; 
    square(length, width) ;

    //task 2  
    float length1 = 0 ; 
    float width1 = 0 ; 
    printf("please enter the length = ") ; 
    scanf("%f", &length1) ;
    printf("please enter the width = ") ;
    scanf("%f", &width1) ;
    square(length1, width1) ;
    

    // task 3 
    printf("my fav programming language is python \n") ;
}