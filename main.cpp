#include "snowman.hpp"

#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
	cout << ariel::snowman(34243141) << endl;  /* Should print:    _   
   /_\\  
  (o -) 
 /(   )> 
  ( : ) 
	
	*/

	cout << ariel::snowman(14332411) << endl;   /* Should print:
  _===_ 
 \(O O) 
  ( : ) 
  ( : ) 

	*/


	cout << ariel::snowman(11111111) << endl;   /* Should print:
  _===_ 
  (.,.) 
 <( : )>
  ( : ) 
	
	*/


	cout << ariel::snowman(22222222) << endl;   /* Should print:
  ___  
 ..... 
\(o.o)/
 (] [) 
 (" ") 

     */

	cout << ariel::snowman(33333332) << endl;   /* Should print:
    _   
   /_\  
  (O_O) 
 /(> <)\
  (" ")  

     */

   
    cout << "_______________________________" << endl;
    cout << "   *           *               " << endl;
    cout << "  *                   *        " << endl;
    cout << "                   *        *  " << endl;
    cout << "         *     *               " << endl;
    cout << ariel::snowman(11114411) << endl;
    cout << "_______________________________" << endl << endl;

/* Should print:
_______________________________
   *           *
  *                   *
                   *        *   
         *     *        

  _===_ 
  (.,.) 
 <( : )>
  ( : )

_______________________________

*/
    //Prints all the variations for a snowman there is

//       for (int i = 11111111; i <= 44444444; ++i) {
//       try {
//           cout << ariel::snowman(i) << endl << endl << endl;
//       } catch (...) {
//
//       }
//   }

   

	try {
		cout << ariel::snowman(1) << endl;   // Exception - not a valid code
	} catch (exception& ex) {
	 	cout << "   caught exception: std::range_error " << ex.what() << endl;
	}


	try {
		cout << ariel::snowman(12343217) << endl;   // Exception - not a valid code
	} catch (exception& ex) {
	 	cout << "   caught exception: std::invalid_argument" << ex.what() << endl;  
	}

	try {
		cout << ariel::snowman('a') << endl;   // Exception - not a valid code
	} catch (exception& ex) {
	 	cout << "   caught exception: std::range_error " << ex.what() << endl;
	}
}


