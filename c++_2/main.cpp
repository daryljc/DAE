#include <iostream>
#include <cmath>
#include <thread>
using namespace std;

int radius;
int height;

double volume(double radius, double height) {
    return 3.14159 * pow(radius, 2) * height;
}

int main() {
    string response;
    int cont = 0;
    int count = 0; // Designed to count the amount of times the while loop iterates

    
    int values[2] = {radius, height};
    
    while (cont == 0) 
    {
        count++;
        cout << "Count number: " << count << endl;
        cout << "Hi. This program is designed to calculate for the volume of a cylinder. Would you like to continue? (Y/N): " << endl; 
        /* Here, I had originally divided this into two separate statements that were printed out. 
        This was unnecessary, therefore I concatenated both of the statements into this. */ 
        
        cin >> response;
        if (response == "Y") {
            cout << "" << endl;
            cout << "Okay, great! Lets continue: Please pass a name for your cylinder. " << endl;
            cin >> response;

            cout << "" << endl;
            cout << response + " it is! Now, what radius value (in centimeters) would you like to assign it?" << endl;
            cin >> values[0];
            radius = values[0];

            if (radius > 0) {
                cout << "" << endl;
                cout << "You have chosen " << radius << " as the radius value for " + response + "." << endl;

                cout << "" << endl;
                cout << "Now assign a height value (in centimeters)!" << endl;
                cin >> values[1];
                height = values[1];
                cout << "" << endl;

                if (height > 0) {
                    for (int i = 0; i < 7; i++) {
                        cout << "Calculating volume.." << endl;
                        this_thread::sleep_for(chrono::milliseconds(250)); 
                        for (int i = 0; i < 1; i++) {
                            cout << "Calculating volume.." << endl;
                            this_thread::sleep_for(chrono::milliseconds(250)); 
                        }
                    }

                    double calc = volume(values[0], values[1]);
                    cout << "" << endl;
                    cout << "This is your volume in cubic centimeters: " << calc << endl;
                    
                } else {
                    cout << "" << endl;
                    cout << "Invalid input. Terminating program.";
                    cont = 1;
                }

            } else {
                cout << "" << endl;
                cout << "Improper input. Terminating program.";
                cont = 1;
            }

        } 
        else if (response == "N") {
            cout << "" << endl;
            cout << "Understood. Terminating program.";
            cont = 1;
        } 
        else {
            cout << "" << endl;
            cout << "Improper input detected. Terminating program.";
            cont = 1;
        }
    }
}

/* 
Modify and manipulate multiple variables
Change the values of at least 2 variables in your project, each of a different data type, during the program’s execution.

Create nested decision structures
Implement at least 1 nested decision-making structure using if-else or switch statements.

Implement nested loops
Include at least 1 nested loop in your project to manage repetitive tasks at multiple levels.

Create and call custom functions with parameters
Create and use at least 1 custom function that takes at least 2 parameters in your project.

Use arrays or lists for operations
Perform at least 1 operation (e.g., adding, removing, or accessing elements) on arrays or lists in your project.

Optimize and document your code
Refactor at least 1 area of your code for efficiency and include comments explaining the optimization.
*/