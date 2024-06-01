#include<stdio.h>
#include<string.h>

typedef struct data{
    int a;
    char b[20];
}data_t;


void func(void *void_ptr ){
    data_t *data1 = (data_t *)void_ptr;

    printf("%d\n", data1 -> a);
    printf("%s\n", data1 -> b);

}


int main(int argc, char* argvp[]){

    data_t data1;
    data1.a = 200;
    strcpy(data1.b, "cat");    

    func(&data1);

    return 0;
}
