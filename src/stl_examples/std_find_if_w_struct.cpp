#include <algorithm>
#include <vector>
#include <iostream>

struct Person {
    std::string name;
    int age;
};

int main() {
    std::vector<Person> people = {
        {"Alice", 30},
        {"Bob", 25},
        {"Charlie", 35}
    };

    int age_to_find = 25;
    auto it = std::find_if(people.begin(), people.end(), [age_to_find](const Person& p) {
        return p.age == age_to_find;
    });

    if (it != people.end()) {
        std::cout << "Found: " << it->name << " is " << it->age << " years old." << std::endl;
    } else {
        std::cout << "No person found with age " << age_to_find << std::endl;
    }

    return 0;
}