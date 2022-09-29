#include <iostream>
#include<string>

using namespace std;
int addNumbers ( int num1 ,  int num2 );
void assignArray(int group[] ,  int arraySize );
void arraySum ( int array1[] , int array2[] ,int* array3 ,  int arraySize );
string addWords ( string word1 ,  string word2 );
void proccesOptions( string name );
int getOption ( string name , int option );
void optionOne ();
void optionTwo ();
void optionThree ();

int main()
{

  string name ;
  cout << " what's your name "   << endl;
  cin >>  name ;
  proccesOptions (name) ;

 }

int getOption ( string name , int option ) {
 cout << " \n Hello  " << name << endl ;
  cout << " please choose the following \n 1- Add two numbers \n 2- Add two arrays \n 3- Add two strings \n 4- Quit " << endl;
  cin >> option;
  return option;

}


void proccesOptions( string name ) {
for( ; true ; ){

    int option ;

    option = getOption(name , option );

   if ( option == 1 ){

      optionOne();

        }

  else if ( option == 2 ) {

    optionTwo();


  }

 else  if ( option == 3 ){

    optionThree();

  }

  else if ( option == 4 ) {
    break ;
  }

  else  {
    cout << " wrong number try again" << endl;
  }


}
}
void optionOne () {

 int num1 , num2 ;

    cout << " Add number 1 " << endl;
    cin >> num1;

    cout << " Add number 2" << endl;
    cin >> num2;

   cout << " The sum is " << num1 << " + " << num2 << " = " << addNumbers(num1 , num2) << endl;
}

void optionTwo (){

int arraySize;
    cout << "enter the array size"<< endl;
    cin >> arraySize;

   int array1[arraySize] , array2[arraySize] , array3[arraySize] ;


  cout<<"array 1" << endl;
   assignArray(array1 , arraySize);

   cout << "  " << endl;
   cout<<"array 2" << endl;
   assignArray(array2 , arraySize);

   arraySum(array1 , array2 , array3 , arraySize);

   cout << " the sum of the arrays is : " << endl;
   for ( int x = 0 ; x < arraySize ; x++ ){

    cout << array3[x] << "  " ;
   }

}

void optionThree () {

string word1 , word2 , word3;
    cout << " Enter word 1 " << endl;
    cin >> word1;
   cout << " Enter word 2 " << endl;
   cin >> word2;
   word3 = addWords(word1 , word2);

   cout << word1 << " + " << word2 << " = " << word3 << endl ;

}


 int addNumbers ( int num1 , int num2 ) {

 int sum =  num1 + num2 ;
 return  sum;

 }

 void assignArray(int group[] ,  int arraySize ) {

    int element;

   for ( int x = 0; x < arraySize;  x++ ){
      cout << " enter element "  << x << endl;
    cin >> element;
    group[x] =  element;

}
 }

void arraySum ( int array1[] ,  int array2[] ,int* array3 , int arraySize ){
   array3[arraySize];
  for ( int x = 0 ; x < arraySize ; x++  ){
    array3[x] = array1[x] + array2 [x];
  }
}
string addWords ( string word1 , string word2 ){

 string word3 ;
 word3 = word1 + word2;
 return word3;

}

