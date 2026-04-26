#include <iostream>

int main() {

    
    int x{};
    bool isdumb{};

    std::cout << "A shopkeeper sells you an item for 100";
    std::cout << "after bargaining, how much can you get it for:  ";
// enter a value for the initialised variable x
    std::cin >> x ;

    if (x > 100)
    {isdumb = true;}

    else
    {isdumb = false;}
//if x is greater than 100, bool is true and program will run the first statement, otherwise it will run the second statement

    if (isdumb == true)
    {std::cout << "your so dumb" ;}


    else
    {std::cout << "good boy" ;}

     std::cin.ignore();
     std::cin.get();
        return 0;
         /* show the final output which should be a string i think */
}