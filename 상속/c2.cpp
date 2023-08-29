#include <iostream>
#include <string>

template <typename T>
class Character {
public:
    Character(const std::string& name, T health, T attack, T defense)
        : name(name), health(health), attack(attack), defense(defense) {}

    void printCurrentState() {
        std::cout << "이름: " << name << std::endl;
        std::cout << "체력: " << health << std::endl;
        std::cout << "공격: " << attack << std::endl;
        std::cout << "방어: " << defense << std::endl;
    }

private:
    std::string name;
    T health;
    T attack;
    T defense;
};

int main() {
    // 주인공 객체 생성 및 현재 상태 출력
    Character<int> protagonist("주인공", 100, 20, 10);
    protagonist.printCurrentState();

    return 0;
}