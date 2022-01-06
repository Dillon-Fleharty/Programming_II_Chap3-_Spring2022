
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    const double CLASS_A_PRICE = 15.0;
    const double CLASS_B_PRICE = 12.0;
    const double CLASS_C_PRICE = 9.0;

    int classA, classB, classC;

    double total;

    cout << "Enter the number of Class A tickets sold: ";
    cin >> classA;

    cout << "Enter the number of Class B tickets sold: ";
    cin >> classB;

    cout << "Enter the number of Class C tickets sold: ";
    cin >> classC;

    total = (classA * CLASS_A_PRICE) + 
            (classB * CLASS_B_PRICE) +
            (classC * CLASS_C_PRICE);

    cout << "\nThe total revenue for tickets sold was $" << setprecision(2) << fixed << total << endl;

    return 0;

}
