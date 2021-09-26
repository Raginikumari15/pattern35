/* ABCDE
  ABCD
  ABC
  AB
  A*/
#include <iostream> 
using namespace std;
int main (){
  int i = 1;
  
    while(i<= 5){
        char k = 'A';
        int j = 1;
        while(j<= 6-i){
            cout<< k;
             k++;
             j++;
        }
        cout<< endl;
         i++;
    }
    
}
