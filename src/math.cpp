#include "math.h"

int main() {
    auto shape = ShapeFactory::createShape("circle");

    if (shape) {
        shape->draw();
    } else {
        cout << "Unknown shape type!" << endl;
    }

    return 0;
}
