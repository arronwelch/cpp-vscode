#include <iostream>
#include <vector>

#include "shape.h"
#include "generator.h"

using namespace std;

int main(void)
{
    vector<ShapeGenerator *> genlist{new CircleGenerator(), new RectangleGenerator(), new TriangleGenerator()};

    while (true)
    {

        cout << "Please input the shape you want to create: " << endl;
        int i;
        for (i = 0; i < genlist.size(); i++)
        {
            cout << i << ": " << genlist[i]->getName() << endl;
        }

        cout << i << ": Quit" << endl;
        unsigned int choice;
        cin >> choice;
        if (choice == i)
        {
            // Clean up all allocated memory before exiting
            for (auto generator : genlist) {
                delete generator;
            }
            return 0;
        }

        if (choice > i)
        {
            cout << "Invalid choice! Please try again." << endl;
            continue; // Continue to next iteration instead of proceeding
        }

        Shape *pShape = genlist[choice]->createShape();
        float area = pShape->area();
        float perimeter = pShape->perimeter();
        cout << "The area of " << pShape->getShapeName() << " is " << area << endl;
        cout << "The perimeter of " << pShape->getShapeName() << " is " << perimeter << endl;

        // Don't forget to clean up the shape object after using it
        delete pShape;
    }

    // Clean up generators if loop somehow exits without user quitting
    for (auto generator : genlist) {
        delete generator;
    }
}