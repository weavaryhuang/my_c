# include <iostream>
# include <Windows.h>

# define MAX 100

using namespace std;
void func(int*);
void prinout(int*, char*);
void swap(int*, int*);

int main(){
    int var1 = 11;
    int var2 = 12;
    int var3 = 13;
    int arr[5] = {1, 2, 3, 4, 5};

    int t;
    int c;

    char ph[MAX] = "abc";

    int* pvar1 = &var1;
    int* pvar2 = &var2;
    int* pvar3 = &var3;

    int* parr = &arr[0];
    
    char* pph = ph;

    while((c = getchar() )!= EOF){
        printf("%d\n",isdigit(c));
    };


    
    swap(pvar1, pvar3);

    printf("%d\t%d\n", var1, var3);

    func(pvar3);
    prinout(&var1, pph);

    cout << parr << endl;
    cout << arr << endl;
    cout << *(parr) << endl;
    cout << *arr << endl;

    Sleep(1000);

    return 0;
}

void func(int* x){
    *x = 66;
}

void prinout(int* x, char* a){
    cout << *x << "\t" << *(x-3) << "\t" << x << endl;
    cout << *a << "\t" << a+2 << endl;
}

void swap(int* x, int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}