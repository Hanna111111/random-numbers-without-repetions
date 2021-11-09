/*
write a program wchich generates random numbers by user
from 0 - 20, 
but array elements shouldn't have equal numbers
*/

#include <iostream>
#include<ctime>
using namespace std;

int main()
{
srand(time(NULL));

int size;

cout << "Please, enter the size of array " << endl;
cin >> size;

int array[size];

//input random numbers from 0 to 20
for(int i = 0; i < size;){
    
    bool alreadyThere = false;
    int newRandomValue = rand() % 20;
    
    for(int j = 0; j < i; j++){
        
        if(array[j] == newRandomValue){
            alreadyThere = true;
            break;
        }
    }
    
    if(!alreadyThere){
        array[i] = newRandomValue;
        i++;
    }
}


//output numbers 
for(int i = 0; i < size; i++){
    cout << array[i] << " ";
}



    return 0;
}
