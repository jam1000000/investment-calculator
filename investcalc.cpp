#include <iostream>
using namespace std;

int main() {
    float init;
    float reinv;
    int per;
    float interest;
    
    
    cout << "Enter an initial investment: ";
    cin >> init;
    
    cout << "Reinvestment amount: ";
    cin >> reinv;
    
    cout << "Enter the number of periods: ";
    cin >> per;
    
    cout << "Percent interest: ";
    cin >> interest;
    interest /= 100;
    interest += 1.0;
    
    float totalinv = init;

    for (int i = 0; i < per; i++) {
        totalinv *= interest;
        totalinv += reinv;
    }
    
    float yield = totalinv - (init + (reinv * per));
    
    cout << "Your investment amount at the end of " << per << " periods is now $" << totalinv << ".\n";
    cout << "With an initial investment of $" << init << ", You made $" << yield << ".\n";

    return 0;
}
