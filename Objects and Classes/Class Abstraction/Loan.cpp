#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class Loan {
    public: 
        Loan();
        Loan(double rate, int years, double amount);
        double getAnnualInterestRate();
        int getNumberOfYears();
        double getLoanAmout();
        void setAnnualInterestRate(double rate);
        void setNumberOfYears(int years);
        void setLoanAmout(double amount);
        double getMonthlyPayment();
        double getTotalPayment();
    private: 
        double annualInterestRate;
        int numberOfYears;
        double loanAmount;
};

Loan::Loan() {
    annualInterestRate = 9.5;
    numberOfYears = 30;
    loanAmount = 100000;
}

Loan::Loan(double rate, int years, double amount) {
    annualInterestRate = rate;
    numberOfYears = years;
    loanAmount = amount;
}

double Loan::getAnnualInterestRate() {
    return annualInterestRate;
}

int Loan::getNumberOfYears() {
    return numberOfYears;
}

double Loan::getLoanAmout() {
    return loanAmount;
}

void Loan::setAnnualInterestRate(double rate) {
    annualInterestRate = rate;
}

void Loan::setNumberOfYears(int years) {
    numberOfYears = years;
}

double Loan::getMonthlyPayment() {
    double monthlyInterestRate = annualInterestRate / 1200;
    return loanAmount * monthlyInterestRate / (1 - (pow(1 / (1 + monthlyInterestRate), numberOfYears * 12)));
}

double Loan::getTotalPayment() {
    return getMonthlyPayment() * numberOfYears * 12;
}

int main() {
    cout << "Enter yearly interest rate, for example 8.25: ";
    double annualInterestRate;
    cin >> annualInterestRate;

    cout << "Enter number of years as an integer, for example 5: ";
    int numberOfYears;
    cin >> numberOfYears;

    cout << "Enter loan amount, for example 120000.95: ";
    double loanAmount;
    cin >> loanAmount;

    Loan loan(annualInterestRate, numberOfYears, loanAmount);

    cout << fixed << setprecision(2);
    cout << "The monthly payment is " << loan.getMonthlyPayment() << endl;
    cout << "The total payment is " << loan.getTotalPayment() << endl;

    return 0;
}