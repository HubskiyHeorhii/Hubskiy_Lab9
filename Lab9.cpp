#include <iostream>
#include <string>

using namespace std;

struct Person {
    string name;
    int birthDay;
    int birthMonth;
    int birthYear;
    string birthPlace;

    int Age(int currentDay, int currentMonth, int currentYear) const {
        int age = currentYear - birthYear;
        if (birthMonth > currentMonth || 
           (birthMonth == currentMonth && birthDay > currentDay)) {
            age--;//-1 year, there wasn't birthday this year
        }
        return age;
    }
};

int main() {
    Person person;

    cout << "Type name: ";
    getline(cin, person.name);

    cout << "Type date birthday: ";
    cin >> person.birthDay;

    cout << "Type month birthday: ";
    cin >> person.birthMonth;

    cout << "Type year birthday: ";
    cin >> person.birthYear;

    cin.ignore(); // Remove the newline character from the input buffer to ensure the next input works correctly(getline)

    cout << "Type location birthday: ";
    getline(cin, person.birthPlace);

    int currentDay, currentMonth, currentYear;
    cout << "\nType today date:\n";
    cout << "Day: ";
    cin >> currentDay;
    cout << "Month: ";
    cin >> currentMonth;
    cout << "Year: ";
    cin >> currentYear;

    cout << "\nINFO:\n";
    cout << "Name: " << person.name << "\n";
    cout << "Date: " << person.birthDay << "." 
         << person.birthMonth << "." << person.birthYear << "\n";
    cout << "Place: " << person.birthPlace << "\n";
    cout << "Age: " << person.Age(currentDay, currentMonth, currentYear) << " years\n"; // . it's connect with another elemnts in code/structure/other

    return 0;
}
