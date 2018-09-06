/* 
    write a program to print a square star pattern
*/

//library
  # include <iostream>
  using namespace std;

//main function
  int main() {

       //declarations
         int n = 5, i , j;

       //loops
         for (i = 0; i < n; i++){

         //first row
           if (i == 0){
           //print n stars         
             for (j = 0; j < n; j++){
                cout << "*";
             }
           }

         //last row
           else if (i == n-1 ){
           //print n stars
             for (j = 0; j < n; j++){
                cout << "*";
             }

           }
           //rest all
           //print stars
            else {
               cout << "*";
	           //print n-2 spaces
               for (j = 0; j < (n-2); j++){
                 cout << " ";
               }
				//print stars
				cout << "*";
            }
           
               
               cout << endl;

         }


    return 0;
  }
