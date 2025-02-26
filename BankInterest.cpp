#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double loanAmount;
    int tenure;
    
    cout << "Enter loan amount and tenure (in years): ";
    cin >> loanAmount >> tenure;

    loanAmount *= 2;
    double tenureFloat = static_cast<double>(tenure);
    double interestRate;

    if (tenureFloat >= 1 && tenureFloat <= 5) 
        interestRate = 7.0;
    else if (tenureFloat > 5 && tenureFloat <= 10) 
        interestRate = 8.5;
    else 
        interestRate = 10.0;

    double interest = (loanAmount * interestRate) / 100.0;

    cout << "Final Interest: " << fixed << setprecision(2) << interest << endl;

    return 0;
}
