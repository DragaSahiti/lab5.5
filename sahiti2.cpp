/* 
    write a program to print inverted rightangled triangle star pattern
*/

//library
  # include <iostream>
  using namespace std;

//main function
  int main() {

   //declarations 
     int n = 5, i , j;

   //loops
     for (i = 0; i < 5; i++ ){
 
      //print stars 
        for(j = 0; j < (5-i); j++){
            cout << "*";
        }
    
         cout << endl;
     }

    return 0;
  }
