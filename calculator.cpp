#include<iostream>
#include<cmath>
using namespace std;
void menu() {
    cout << "\n";
    cout << "=====================================================\n";
    cout << "            SCIENTIFIC CALCULATOR \n";
    cout << "=====================================================\n";

    cout << "  BASIC OPERATIONS\n";
    cout << "-----------------------------------------------------\n";
    cout << "  [1]  Addition           [2]  Subtraction\n";
    cout << "  [3]  Multiplication     [4]  Division\n";
    cout << "  [5]  Modulo             [6]  Power\n";

    cout << "\n  ADVANCED OPERATIONS\n";
    cout << "-----------------------------------------------------\n";
    cout << "  [7]  Square Root        [8]  Sin(x)\n";
    cout << "  [9]  Cos(x)            [10]  Tan(x)\n";
    cout << " [11]  Factorial\n";

    cout << "\n  SYSTEM\n";
    cout << "-----------------------------------------------------\n";
    cout << " [12]  Exit Calculator\n";

    cout << "=====================================================\n";
    cout << " Enter Your Choice -> ";
}
int factorial(int n){
    int fact = 1;

    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }

    return fact;
}
double sine(double x){ // sin
    return sin(x);
}

double cosine(double x){ // cos
    return cos(x);
}

double tangent(double x){ //tan
    return tan(x);
}

double add(double x, double y){  // function of addition
    return x + y;
}

double sub(double x, double y){  // function of subtraction
    return x - y;
}

double mul(double x, double y){  // function of multiplication
    return x * y;
}

double div(double x, double y){ // function of division
    if(y == 0){
        cout << "Cannot divide by zero!\n";
        return NAN;
    }
        
    return x / y;
}

int mod(int x, int y){ // function of modulo
    if(y==0){
        cout<<"cannot perform modulo by zero !";
        return 0;
    }
    return x % y;
}

double power(double base, double exp){  // function of power
    return pow(base,exp);
}

double squareroot(double x){ // function of square root
    if(x<0){
        cout<<"square root of negative number is not possible !\n";
         return NAN;
    }
    return sqrt(x);
}

int main() {
   int choice; // store user menue choice 
   double a,b; // variable for calculations 
   do{
   
    menu();
    cout<<"enter your choice :"; //choice
    cin>>choice;

    switch(choice){
        case 1 :
            cout<<"Enter two numbers :";
            cin>>a>>b;
            cout << "\n=====================================\n";
            cout << "        CALCULATION RESULT\n";
            cout << "=====================================\n";
            cout << " Result = " << add(a,b) << endl;
            cout << "=====================================\n"; // case 1 addition
            break;
        
        case 2 :
            cout<<"Enter two numbers :";
            cin>>a>>b;
            cout << "\n=====================================\n";
            cout << "        CALCULATION RESULT\n";
            cout << "=====================================\n";
            cout << " Result = " << sub(a,b) << endl;
            cout << "=====================================\n"; // case 1 addition
            break;
        
        
        case 3 :
            cout<<"Enter two numbers :";
            cin>>a>>b;
             cout << "\n=====================================\n";
            cout << "        CALCULATION RESULT\n";
            cout << "=====================================\n";
            cout << " Result = " << mul(a,b) << endl;
            cout << "=====================================\n"; // case 1 addition
            break;
        
        
        case 4 :
            cout<<"Enter two numbers :";
            cin>>a>>b;
            cout << "\n=====================================\n";
            cout << "        CALCULATION RESULT\n";
            cout << "=====================================\n";
            cout << " Result = " << div(a,b) << endl;
            cout << "=====================================\n"; // case 4 addition
            break;
        
        case 5 :
            int x , y; // usind int for modulo 
            cout<<"Enter two numbers :";
            cin>>x>>y;
            cout << "\n=====================================\n";
            cout << "        CALCULATION RESULT\n";
            cout << "=====================================\n";
            cout << " Result = " << mod(a,b) << endl;
            cout << "=====================================\n"; // case 1 addition
            break;
        
        
        case 6 :
            cout<<"Enter two numbers :";
            cin>>a>>b;
            cout << "\n=====================================\n";
            cout << "        CALCULATION RESULT\n";
            cout << "=====================================\n";
            cout << " Result = " << power(a,b) << endl;
            cout << "=====================================\n"; // case 1 addition
            break;
        
        case 7 :
            cout<<"Enter a number :";
            cin>>a;
            cout << "\n=====================================\n";
            cout << "        CALCULATION RESULT\n";
            cout << "=====================================\n";
            cout << " Result = " << squareroot(a) << endl;
            cout << "=====================================\n"; // case 1 addition
            break;// case 7 square root
          
        
        case 8:
            cout<<"Enter angle in radians: ";
            cin>>a;
            cout << "\n=====================================\n";
            cout << "        CALCULATION RESULT\n";
            cout << "=====================================\n";
            cout << " Result = " << sin(a) << endl;
            cout << "=====================================\n"; // case 1 addition
            break;
            

        case 9:
            cout<<"Enter angle in radians: ";
            cin>>a;
            cout << "\n=====================================\n";
            cout << "        CALCULATION RESULT\n";
            cout << "=====================================\n";
            cout << " Result = " << cosine(a) << endl;
            cout << "=====================================\n"; // case 1 addition
            break;
            

        case 10:
           cout<<"Enter angle in radians: ";
           cin>>a;
           cout << "\n=====================================\n";
            cout << "        CALCULATION RESULT\n";
            cout << "=====================================\n";
            cout << " Result = " << tangent(a) << endl;
            cout << "=====================================\n"; // case 1 addition
            break;
            
        
        case 11:{    
            int n;
            cout<<"Enter a non-negative integer: ";
            cin>>n;

            if(n < 0){
               cout << "\n=====================================\n";
            cout << "        CALCULATION RESULT\n";
            cout << "=====================================\n";
            cout << " factorial is not defined for negative numbers ";
            cout << "=====================================\n"; // case 1 addition
            break;
            ;
            }
            else{
            cout << "\n=====================================\n";
            cout << "        CALCULATION RESULT\n";
            cout << "=====================================\n";
            cout<<"Result = "<<factorial(n)<<endl;
            cout << "=====================================\n"; // case 1 addition
            
               
            }

            break;
        }

        case 12:
            cout << "\n=====================================\n";
            cout << "        CALCULATION RESULT\n";
            cout << "=====================================\n";
            cout<<"Calculator closed\n";
            cout << "=====================================\n";
            ; // case 8 close
            break;
        
        default :
            cout << "\n=====================================\n";
            cout << "        CALCULATION RESULT\n";
            cout << "=====================================\n";
            cout<<"invalide choice !\n"; 
            cout << "=====================================\n";
           // default condition 
    }
   }while(choice!=12);

}