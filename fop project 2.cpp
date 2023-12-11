#include <iostream>
#include <string>
using namespace std;

void printIntro() {
    cout << "Welcome to the Adventure Game!" << endl;
    cout << "You wake up in a mysterious forest." << endl;
    cout << "Your goal is to find the treasure and make it out alive." << endl;
    cout << "Be careful of dangerous creatures lurking in the forest." << endl;
    cout << "Good luck!" << endl;
    cout << endl;
}

void printOptions() {
    cout << "What would you like to do?" << endl;
    cout << "1. Go North" << endl;
    cout << "2. Go East" << endl;
    cout << "3. Go South" << endl;
    cout << "4. Go West" << endl;
    cout << "5. Quit the game" << endl;
    cout << "Enter your choice (1-5): ";
}

void handleChoice(int choice) {
    switch (choice) {
        case 1:
            cout << "You go North and encounter a river." << endl;
            break;
        case 2:
            cout << "You go East and stumble upon a cave." << endl;
            break;
        case 3:
            cout << "You go South and see a towering mountain." << endl;
            break;
        case 4:
            cout << "You go West and find an ancient temple." << endl;
            break;
        case 5:
            cout << "You decide to quit the game. Goodbye!" << endl;
            exit(0);
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
    }
    cout << endl;
}

int main() {
    printIntro();

    while (true) {
        printOptions();

        int choice;
        cin >> choice;

        handleChoice(choice);
    }

    return 0;
}

