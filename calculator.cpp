#include<iostream>
#include<cmath>
using namespace std;
void menu(){
     cout<<"\n=========CALCULATOR==========\n";
    cout<<"1.Addition\n";
    cout<<"2.subtraction\n";
    cout<<"3.multiplication\n";               //menu
    cout<<"4.division\n";
    cout<<"5.modulo\n";
    cout<<"6.power\n";
    cout<<"7.square root\n";
    cout<<"8. Sin\n";
    cout<<"9. Cos\n";
    cout<<"10. Tan\n";
    cout<<"11. Factorial\n";
    cout<<"12. Exit\n";

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
            cout<<"result = "<<add(a,b)<<endl; // case 1 addition
            break;
        
        case 2 :
            cout<<"Enter two numbers :";
            cin>>a>>b;
            cout<<"result = "<<sub(a,b)<<endl; // case 2 subtraction
            break;
        
        case 3 :
            cout<<"Enter two numbers :";
            cin>>a>>b;
            cout<<"result = "<<mul(a,b)<<endl; // case 3 multiplication
            break;
        
        case 4 :
            cout<<"Enter two numbers :";
            cin>>a>>b;
            cout<<"result = "<<div(a,b)<<endl; // case 4 division
            break;
        
        case 5 :
            int x , y; // usind int for modulo 
            cout<<"Enter two numbers :";
            cin>>x>>y;
            cout<<"result = "<<mod(x,y)<<endl; // case 5 modulo
            break;
        
        case 6 :
            cout<<"Enter two numbers :";
            cin>>a>>b;
            cout<<"result = "<<power(a,b)<<endl; // case 6 power
            break;
        
        case 7 :
            cout<<"Enter a number :";
            cin>>a;
            cout<<"result = "<<squareroot(a)<<endl; // case 7 square root
            break;
        
        case 8:
            cout<<"Enter angle in radians: ";
            cin>>a;
            cout<<"Result = "<<sine(a)<<endl;
            break;

        case 9:
            cout<<"Enter angle in radians: ";
            cin>>a;
            cout<<"Result = "<<cosine(a)<<endl;
            break;

        case 10:
           cout<<"Enter angle in radians: ";
           cin>>a;
           cout<<"Result = "<<tangent(a)<<endl;
           break;
        
        case 11:{    
            int n;
            cout<<"Enter a non-negative integer: ";
            cin>>n;

            if(n < 0){
                cout<<"Factorial is not defined for negative numbers!\n";
            }
            else{
               cout<<"Result = "<<factorial(n)<<endl;
            }

            break;
        }

        case 12:
            cout<<"Calculator closed\n"; // case 8 close
            break;
        
        default :
            cout<<"invalide choice !\n"; // default condition 
    }
   }while(choice!=12);

}