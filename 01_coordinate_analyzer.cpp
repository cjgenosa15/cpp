/*
 * File: 01_coordinate_analyzer.cpp
 * Project 1: Coordinate Distance & Quadrant Analyzer
 * 
 * Topics Covered: 
 *   - Variables, User Input, Data Types, Operators
 *   - Strings, Math (<cmath>), Booleans
 *   - Control Flow (if...else, for loop)
 * 
 * Requirements:
 * 1. Ask the user how many points they want to input.
 * 2. Use a for loop to collect a string name (e.g., "Point A") and two double coordinates (x, y) for each point.
 * 3. Calculate the distance to (0,0) using std::hypot(x, y) or sqrt(x*x + y*y).
 * 4. Use bool variables and if...else logic to report if the point lies in Quadrant 1, 2, 3, 4, or directly on an axis/origin.
 * 5. Track and print the name and coordinates of the point that is furthest away from the origin along with its distance.
 */

 //#1 Coordinate Distance & Quadrant Analyzer

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    int num, x, y;
    int xmax = 0, ymax = 0;
    float far = 0;
    float d;
    cout << "Number of points:";
    cin >> num;
    cout << "\n";
    
    for(int i = 0; i < num; i++){
        cout << "x-coordinate:";
        cin >> x;
        cout << "\n";
        cout << "y-coordinate:";
        cin >> y;
        cout << "\n\n";
        
        cout << "----------------------------------\n"

        if(x > 0 && y > 0){
            cout << "The Point is in First Quadrant.\n";
        }
        else if(x < 0 && y > 0){
            cout << "The Point is in Second Quadrant.\n";
        }
        else if(x < 0 && y < 0){
            cout << "The Point is in Third Quadrant.\n";
        }
        else if(x > 0 && y < 0){
            cout << "The Point is in Fourth Quadrant.\n";
        }
        else if(x != 0 && y == 0){
            cout << "The Point is in x-axis.\n";
        }
        else if(x == 0 && y != 0){
            cout << "The Point is in y-axis.\n";
        }
        else cout << "The Point is in origin.\n";
        
        d = sqrt((x*x)+(y*y));
        if(far < d){
            far = d;
            xmax = x;
            ymax = y;
        }
        
        x = 0;
        y = 0;
        
    }
    
    cout << "The Farthest Point is (" << xmax << ", " << ymax << ") with a " << far << " distance from the origin.";
    return 0;
}