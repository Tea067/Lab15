#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify the code above this line
//Write definition of shuffle() using pointer after this line. 

void shuffle(int *a, int *b, int *c, int *d) {
    int r = rand() % 6;
    int t;

    switch (r) {
        case 0: 
            t = *a; *a = *d; *d = t;
            break;

        case 1: 
            t = *b; *b = *d; *d = t;
            break;

        case 2: 
            t = *a; *a = *c; *c = t;
            break;

        case 3: 
            t = *b; *b = *c; *c = t;
            break;

        case 4: 
            t = *a;
            *a = *b;
            *b = *c;
            *c = *d;
            *d = t;
            break;

        case 5: 
            t = *d;
            *d = *c;
            *c = *b;
            *b = *a;
            *a = t;
            break;
    }
}