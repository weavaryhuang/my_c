# include <iostream>

using namespace std;

int strlen(char*);

int main(){    

    char a[] = "abcd";
    char* p = &a[0];

    cout << a << endl;
    cout << strlen(p) << endl;

    return 0;
}


int strlen( char* s){

    char* p = s;

    while(*p != '\0')
        p++;
    
    return p - s;

}