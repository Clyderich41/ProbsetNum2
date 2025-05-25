#include <iostream>
using namespace std;

int main() {
    float width, height;

    cout << "Enter width: ";
    cin >> width;
    cout << "Enter height: ";
    cin >> height;

    float area = width * height;

    for (int i = 0; i < static_cast<int>(height); ++i) {
        for (int j = 0; j < static_cast<int>(width); ++j) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << "\nCalculated Area: " << area << endl;

    return 0;
}