#include <iostream>

int sum() {
    // - It is always good, signed or value of a variable like 0, to avoid garbage in memory
    int x = 0;
    int y = 0;
    std::cout << "Enter the value of X" << "\n";
    std::cin >> x;
    std::cout << "Enter the value of Y" << "\n";
    std::cin >> y;
    int sum = x + y;
    std::cout << "X: " << x << "\n";
    std::cout << "Y: " << y << "\n";
    std::cout << "Soma: " << sum << "\n";
}

int DataTypes() {

    //Integer (Whole number)
    int age = 21;
    int year = 2023;
    int days = 7;

    //Double (Number include decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    //Single Character
    char grade = 'A';
    char initial = 'B';

    //Bool (true or false)
    bool studant = true;
    bool power = false;
    bool forSale = true;

    //String (Sequence of text)
    std::string name = "Fabricio";
    std::string day = "Friday";
    std::string food = "Pizza";
    std::string address = "123 Fake St.";


    int opc;
    bool key = true;

    while (key == true) {
        std::cout << "Examples" << "\n";
        std::cout << "1 - For types Integer" << "\n";
        std::cout << "2 - For types Double" << "\n";
        std::cout << "3 - For types Char" << "\n";
        std::cout << "4 - For types Bool" << "\n";
        std::cout << "5 - For types String" << "\n";
        std::cout << "6 - For Quit" << "\n";
        std::cout << "Enter the value of Opc" << "\n";
        std::cin >> opc;
        system("clear");

        if (opc == 1) {
            std::cout << "Age: " << age << "\n";
            std::cout << "Year: " << year << "\n";
            std::cout << "Days: " << days << "\n\n";
        } else if (opc == 2) {
            std::cout << "Price: " << price << "\n";
            std::cout << "Gpa: " << gpa << "\n";
            std::cout << "Temperature: " << temperature << "\n\n";
        } else if (opc == 3) {
            std::cout << "Grade: " << grade << "\n";
            std::cout << "Initial: " << initial << "\n\n";
        } else if (opc == 4) {
            std::cout << "{1 - True | 0 - False}" << "\n";
            std::cout << "Studant: " << studant << "\n";
            std::cout << "Power: " << power << "\n";
            std::cout << "ForSale: " << forSale << "\n\n";
        } else if (opc == 5) {
            std::cout << "Name: " << name << "\n";
            std::cout << "Day: " << day << "\n";
            std::cout << "Food: " << food << "\n";
            std::cout << "Address: " << address << "\n\n";
        } else if (opc == 6) {
            key = false;
        }
    }
}

int main() {
    int x;
    std::cout << "1 - For Method Soma" << "\n";
    std::cout << "2 - For Method DataTypes" << "\n";
    std::cout << "Enter the value of Opc" << "\n";
    std::cin >> x;
    if (x == 1) {
        system("clear");
        sum();
    } else if (x == 2) {
        system("clear");
        DataTypes();
    }
    return 0;
}