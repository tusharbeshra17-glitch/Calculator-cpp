#include<iostream>
#include<cmath>
using namespace std;

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
   double a,b,result; // variable for calculations 
   do{
    cout<<"\n=========CALCULATOR==========\n";
    cout<<"1.Addition\n";
    cout<<"2.subtraction\n";
    cout<<"3.multiplication\n";               //menue
    cout<<"4.division\n";
    cout<<"5.modulo\n";
    cout<<"6.power\n";
    cout<<"7.square root\n";
    cout<<"8.Exit\n";

    cout<<"enter your choice :"; //choice
    cin>>choice;

    switch(choice){
        case 1 :
            cout<<"enter two number :";
            cin>>a>>b;
            cout<<"result = "<<add(a,b)<<endl; // case 1 addition
            break;
        
        case 2 :
            cout<<"enter two number :";
            cin>>a>>b;
            cout<<"result = "<<sub(a,b)<<endl; // case 2 subtraction
            break;
        
        case 3 :
            cout<<"enter two number :";
            cin>>a>>b;
            cout<<"result = "<<mul(a,b)<<endl; // case 3 multiplication
            break;
        
        case 4 :
            cout<<"enter two number :";
            cin>>a>>b;
            cout<<"result = "<<div(a,b)<<endl; // case 4 division
            break;
        
        case 5 :
            int x , y; // usind int for modulo 
            cout<<"enter two number :";
            cin>>x>>y;
            cout<<"result = "<<mod(x,y)<<endl; // case 5 modulo
            break;
        
        case 6 :
            cout<<"enter two number :";
            cin>>a>>b;
            cout<<"result = "<<power(a,b)<<endl; // case 6 power
            break;
        
        case 7 :
            cout<<"enter a number :";
            cin>>a;
            cout<<"result = "<<squareroot(a)<<endl; // case 7 square root
            break;
        
        case 8 :
            cout<<"calculator closed\n"; // case 8 close
            break;
        
        default :
            cout<<"invalide choice !\n"; // default condition 
    }
   }while(choice!=8);

}