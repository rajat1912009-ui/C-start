 #include <iostream>

int main() {
     
     std::cout << "enter three values:  " ;

     int x{};
     int y{};
     int z{};

     std::cin >> x >> y >> z;
     
     std::cout << " you entered " << x << "," << y << "," << "and " << z << std::endl;
     std::cin.ignore();
     std::cin.get();
     
}