#include <stdio.h>
#include <stdint.h>


typedef struct{
    int id;
    int lenght;
    char data[256];
}data_packet_t;


void foo(int x)
{
    printf("This is foo function with parameter %d\n", x);
}

double add(double a, double b){

    return a + b;
}


int main()
{
    printf("Hello, World!\n");

    printf("Lets start with the Primary DSA");
    // here we will learn about the basic Data Structures

    int number_integer = 10;
    float number_float = 10.5;
    char character = 'A';
    char string[] = "Hello";
    double array_double[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    printf("Integer: %d, Float: %0.2f, Character: %c, String: %c\n",
           number_integer,
           number_float,
           character,
           string[0]);
    // now we will check the size of each data type
    printf("Integer: %zu, Float: %zu, Character: %zu, String: %zu double : %zu array_double number of elements : %zu\n",
           sizeof(number_integer),
           sizeof(number_float),
           sizeof(character),
           sizeof(string),
           sizeof(double),
           (sizeof(array_double) / sizeof(double)));

    int bad_array[10];

    printf("Size of bad_array: %zu\n", sizeof(bad_array));

    uint8_t byte_var1 = 255;         // can store value ranging from 0 to 255
    uint16_t byte_var2 = 65535;      // can store value ranging from 0 to 65535
    uint32_t byte_var3 = 4294967295; // can store value ranging from 0 to 4294967295

    printf("Size of uint8_t: %zu, Value: %u\n", sizeof(byte_var1), byte_var1);
    printf("Size of uint16_t: %zu, Value: %u\n", sizeof(byte_var2), byte_var2);
    printf("Size of uint32_t: %zu, Value: %u\n", sizeof(byte_var3), byte_var3);

    int8_t signed_byte_var1 = -128;         // can store value ranging from -128 to 127
    int16_t signed_byte_var2 = -32768;      // can store value ranging from -32768 to 32767
    int32_t signed_byte_var3 = -2147483648; // can store value ranging from -2147483648 to 2147483647

    printf("Size of int8_t: %zu, Value: %d\n", sizeof(signed_byte_var1), signed_byte_var1);
    printf("Size of int16_t: %zu, Value: %d\n", sizeof(signed_byte_var2), signed_byte_var2);
    printf("Size of int32_t: %zu, Value: %d\n", sizeof(signed_byte_var3), signed_byte_var3);
    
    // now we will learn about struct in c 

        data_packet_t packet;
        packet.id =1;
        packet.lenght =5;
        packet.data[0] = 'H';
        packet.data[1] = 'e';   
        /*
        Here we will be aable to use two types of print statements 
        1)  sprintf----> less secure cannot limit the buffer size
        2)   snprintf--> more secure can limit the buffer size

        */

        sprintf(packet.data, "Hello");
        printf("Packet ID: %d, Length: %d, Data: %s\n", packet.id, packet.lenght, packet.data);
        snprintf(packet.data, sizeof(packet.data), "World");
        printf("Packet ID: %d, Length: %d, Data: %s\n", packet.id, packet.lenght, packet.data);

        data_packet_t packet2 = {
            .id =2,
            .lenght=7,
            .data="DSA_C"
        };
        
        data_packet_t *packet_ptr = &packet2;
        printf("Packet2 ID %d, lenght %d, Data : %s\n",packet_ptr->id,packet_ptr->lenght,packet_ptr->data);

        // now we will learn about how to take a input string with spaces
        // char input_string[100];
        // printf("Enter a string with spaces: ");
        // scanf("%[^\n]%*c", input_string);

        // ********** need to revist

        // function pointer in c

        void (*function_pointer)(int);
        
        function_pointer = foo;
        
        (*function_pointer)(42);// this dereferencing the function pointer and calling the function

        double (*add_pointer)(double, double);
        add_pointer = add;
        double sum = (*add_pointer)(5.5, 4.5);
        printf("Sum: %0.2f\n", sum);

        // assigning a function pointer to the array
        // ******* need  to revist


        //   memory allocation in c language

        int *dynamic_array= malloc(10 *sizeof(int));
        for(int i =0 ;i<10;i++){
            dynamic_array[i] = 10 - i;
            printf("Dynamic array is %d\n",dynamic_array[i]);
        }
        printf("Dynamic array address %p\n",dynamic_array);
        free(dynamic_array);
        printf("Dynamic array : %d\n",dynamic_array[0]);// undefined behavior after free


    return 0;
}
