#include <stdio.h>
//its defining what is actually FRACTION_FACTOR means
#define FRACTION_FACTOR (4.0f/3.0f)
//defining value of Pi
#define PI 3.1416

int main(void)
{
//this part show result using default value 10-meter radius
    float rad = 10.00;
    float vol = FRACTION_FACTOR * PI * (rad * rad * rad);
    printf("Volume of 10-meter radius shpere is: %.2fm^3\n", vol);

//this part show result prompting user for input
    printf("-----PROMPTED RESULT-----\n");
    float rad1;
    printf("Enter Radius: ");
    scanf("%f", &rad1);
//initializing, assigning, calculating the value all at the same time
    float vol1 = FRACTION_FACTOR * PI * (rad1 * rad1 * rad1);
    printf("Volume of %.2f-meter radius sphere is: %.2fm^3\n", rad1, vol1);
//this is just one beginner way of writing the source code
//u can use your own design & more efficient dsign
}
