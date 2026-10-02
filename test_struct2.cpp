#include <iostream>
using namespace std;
typedef struct employee{
    int id;           // 4 bytes
    float sallary;    // 4 bytes
    char favchar;     // 1 byte + 3 bytes padding
} ep;
int main(){
    ep harry;
    harry.id = 1;
    harry.favchar = 'c';
    harry.sallary = 120000;
    cout << "Size of struct: " << sizeof(ep) << endl;
    cout << "ID: " << harry.id << endl;
    cout << "Favchar: " << harry.favchar << endl;
    cout << "Sallary: " << harry.sallary << endl;
    return 0;
}
