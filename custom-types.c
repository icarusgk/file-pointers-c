#include <stdio.h>

struct Cars
{
    int year;
    char model[10];
    char plate[7];
    int odometer;
    double engine_size;
}
car;

// 'struct Cars' old name
// 'cart_t' new name
typedef struct Cars car_t;

int main(void)
{
    car_t car1;
    car1.year = 2020;
    printf("%i\n", car1.year);
}
