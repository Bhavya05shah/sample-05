#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int choice;
    cout <<" Welcome to the scientific calculator"<<endl;
    cout <<"Enter choice 1 for Add,Sub,Mutliply,Division"<<endl;
    cout <<"Enter choice 2 for exponential function"<<endl;
    cout <<"Enter choice 3 for sin,cos,tan functions and value of angle in Radians"<<endl;
    cin  >>choice;


   double num1,num2;
   char op;
   if(choice == 1){
   cout<<"Enter the first number:";
   cin>> num1;
    
   cout << "Enter the operator:";
   cin >> op;

   cout << "Enter the second number:";
   cin >> num2;
   double result;

   if(op == '+'){
    result= num1 + num2;
   }else if (op == '-'){
    result = num1 - num2;
   }else if (op == '*'){
    result = num1 * num2;
   }else if (op == '/'){
    result = num1 / num2;
   }else {
    cout << "Invalid Operator";
   }
   cout << result;
   }

   if (choice == 2){
    cout <<"Enter base:"<<endl;
    cin>>num1;
    cout<<"Enter power:"<<endl;
    cin>>num2; 
    double result = 1.00;
    for(int i=0;i<num2;i++){
        result=result*num1;
    } 
    cout << " Your answer is " << result <<endl;
   }
   if (choice == 3){
      double radians;

      cout << " Enter angle in radians: "<<endl;
      cin  >>num1;
      
      cout<<"Enter the operator (s for sin , c for cos , t for tan ):"<<endl;
      cin >>op;
        
      if(op == 's'){
        double result;
        result = num1 - ((num1*num1*num1)/6.00)+((num1*num1*num1*num1*num1)/120.00);
        cout <<" Your answer is "<<result<<endl;
        return 0;
    }
      else if (op == 'c'){
        double result;
        result = 1-((num1*num1)/2.00)+((num1*num1*num1*num1)/24.00);
        cout <<" Your answer is "<<result<<endl;
        return 0;
    }
      else if (op == 't'){
        double result;
        result = num1 + ((num1*num1*num1)/3.00) + (((num1*num1*num1*num1*num1)*2)/15.00);
        cout << " Your answer is "<< result<<endl;
        return 0;
      }
   }
     return 0;
}
