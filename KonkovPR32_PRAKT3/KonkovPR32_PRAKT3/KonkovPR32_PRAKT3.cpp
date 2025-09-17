#include <iostream>

union People {
    char fio[40];
    int age;
    int numberPassport;
    char fioMather[];
    char fioFather[];
};


struct Anketa {
    char fio[40];
    int age;
public:
    People Create() {
        People people;
        if (age < 16) {
            char fioMather[40];
            char fioFather[40];

            people.fio[40] = fio[40];
            people.age = age;
            std::cout << "input fio mather: ";
            std::cin.getline(people.fioMather, 40);
            std::cout << "input fio father: ";
            std::cin.getline(people.fioFather, 40);
            people.numberPassport = 0;
        }
        else {
            people.fio[40] = fio[40];
            people.age = age;
            std::cout << "input number passport: ";
            std::cin >> people.numberPassport;
        }
        return people;
    }
};


void Menu() {
    std::cout << "input: " << std::endl;
    std::cout << "1. anketa" << std::endl;
    std::cout << "2. list people > 16" << std::endl;
    std::cout << "3. exit" << std::endl;
}

int main()
{
    bool f = true;
    int u;
    
    while (f != false) {
        Menu();
        std::cin >> u;
        if (u == 1) {
            Anketa anketa;
            std::cout << "input fio: ";
            std::cin >> anketa.fio;
            std::cout << std::endl;
            std::cout << "input age: ";
            std::cin >> anketa.age;
            People people = anketa.Create();
            std::cout << std::endl;
            
        }
        else if (u == 2) {

        }
        else {
            f = false;
        }
    }
}

