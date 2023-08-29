#include <iostream>
#include <string>

template <typename T>
class Character {
public:
    Character(const std::string& name, T health, T attack, T defense)
        : name(name), health(health), attack(attack), defense(defense) {}

    void printCurrentState() {
        std::cout << "�̸�: " << name << std::endl;
        std::cout << "ü��: " << health << std::endl;
        std::cout << "����: " << attack << std::endl;
        std::cout << "���: " << defense << std::endl;
    }

private:
    std::string name;
    T health;
    T attack;
    T defense;
};

int main() {
    // ���ΰ� ��ü ���� �� ���� ���� ���
    Character<int> protagonist("���ΰ�", 100, 20, 10);
    protagonist.printCurrentState();

    return 0;
}