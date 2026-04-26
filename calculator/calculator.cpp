#include <iostream>

int main() {
// defining all variables


 double num1{} , num2{} , result{};
 char (operand);
char userchoice{};

//introduction and user input for base 2 numbers
do {std::cout << "Welcome to calculator" << " please enter two numbers:  ";
std::cin >> num1 >> num2 ;

// user input for the operator
std::cout << "Please enter an operator: ";
std::cin >> operand ;

std::cin.clear();
std::cin.ignore();

// main logic tree, using if else statements
if ( operand == '+')
    {result = num1 + num2 ;}

else if (operand == '-')
    {result = num1 - num2 ;}

else if (operand == '*')
    {result = num1 * num2 ;
    }


else if (operand == '/')
    {if (num2 !=0)  //to prevent /0 death
        {result = num1/num2;}   
    else
     {std::cout << " You cannot divide by 0 bruh" << std::endl;
    return 1;}
    }

else
 {std::cout << "Invalid operator" << std::endl;
    return 1;}


std::cout << "And the result is:  " << result << std::endl;
 
std::cout << " Do you wanna go again?: (y/any other character)" << std::endl;
std::cin >> userchoice;
 

//to pause the cmd after complete execution
}
   while
         ( userchoice == 'y' );
}