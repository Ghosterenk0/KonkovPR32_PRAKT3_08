#include <iostream>
union People {
    char fio[];
    int age;
    int numberPassport;
    char fioMather[];
    char fioFather[];
};


int main()
{
    const int N = 3;
    People peoples[N];
    std::cout << "Create 3 people: " << std::endl;
    int age;
    char fio[100];
    std::cout << "input fio: ";
    std::cin.getline(fio, 100);
    std::cout << "input age: ";
    std::cin >> age;
    People people;
    if (age < 16) {
        people.fio[100] = fio[100];
        people.age = age;
        std::cout << "input fio mather: ";
        std::cin.getline(people.fioMather, 100);
        std::cout << "input fio father: ";
        std::cin.getline(people.fioFather, 100);
        people.numberPassport = 0;
    }
    else {
        people.fio[100] = fio[100];
        people.age = age;
        std::cout << "input number passport: ";
        std::cin >> people.numberPassport;
    }

    peoples[0] = people;
    std::cout << std::endl;

    
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (peoples[j].numberPassport > peoples[j + 1].numberPassport) {
                People temp = peoples[j];
                peoples[j] = peoples[j + 1];
                peoples[j + 1] = temp;
            }
        }
    }
    std::cout << "Sort people >= 16";
    for (int i = 0; i < N; i++)
    {
        if (peoples[i].age >= 16) {
            std::cout << "FIO: " << peoples[i].fio;
            std::cout << "Age: " << peoples[i].age;
            std::cout << std::endl;
        }
    }
        
}


