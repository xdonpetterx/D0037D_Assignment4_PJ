#include <iostream>

using std::cout; using std::cin; using std::endl;

/* This lab has the following objectives

Get familiar with classes and objects
Practice dynamic memory allocation and deallocation
In all programming tasks, separate class declarations (.h) from definitions (.cpp). */



void main_menu()
{
    cout << "Menu: " << endl;
    cout << "1: Task 1: Motor vehicle" << endl;
    cout << "2: Task 2: Point2D" << endl;
    cout << "3: Task 3: Polyline" << endl;
    cout << "4: Task 4: Card deck" << endl;
    cout << "0: Exit " << endl;
    cout << "Which task would you like to run? ";
}

void task_1_motor_vehicle(){
    cout << "Motor vehicle under construction" << endl;
}

void task_2_point2d(){
    cout << "Point2D under construction" << endl;
}

void task_3_polyline(){
    cout << "Polyline under construction" << endl;
}

void task_4_card_deck(){
    cout << "Card deck under construction" << endl;
}

int main() {
    int input;
    do
    {
        main_menu();
        while (!(cin >> input))
        {
            cout << "Incorrect input.\n";
            cin.clear();
            (void)cin.ignore(INT_MAX, '\n');
            main_menu();
        }
        switch (input)
        {
            case 1: task_1_motor_vehicle();
                break;
            case 2: task_2_point2d();
                break;
            case 3: task_3_polyline();
                break;
            case 4: task_4_card_deck();
                break;
            case 0: cout << "Goodbye!" << endl;
                break;
            default: cout << "Sorry, there is no such task!" << endl;
                break;
        }
    } while (input != 0);
    return 0;
}
