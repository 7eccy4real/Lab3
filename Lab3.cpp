#include <iostream>
#include <string>
using namespace std;

class Company {
public:
    string companyName;
    int companyNumberOfPeople;
    bool isLocatedInCIS;
    string NameOfCountry;

    Company() : companyName("Default Company"), companyNumberOfPeople(8), isLocatedInCIS(true), NameOfCountry("Country in CIS") {}

    Company(string name, int size, bool location, string name_of_country ) : companyName(name), companyNumberOfPeople(8), isLocatedInCIS(location), NameOfCountry(name_of_country) {}

    void printCompanyInfo() {
        cout << "Company: " << companyName << ", People: " << companyNumberOfPeople << ", Located in CIS: " << (isLocatedInCIS ? "Yes" : "No") << ", Name of Country: " << NameOfCountry << endl;
    }
};

class Employee {
public:
    string employeeName;
    int employeeAge;
    bool isDivorced;
    int numberOfFormers;

    Employee() : employeeName("Default Employee"), employeeAge(26), isDivorced(true), numberOfFormers(2) {}

    Employee(string name, int age, bool divorced, int formers) : employeeName(name), employeeAge(age), isDivorced(divorced), numberOfFormers(formers) {}

    void printEmployeeInfo() {
        cout << "Employee: " << employeeName << ", Age: " << employeeAge << ", Divorced: " << (isDivorced ? "Yes" : "No") << ", Formers: " << numberOfFormers << endl;
    }
};

class Vehicle {
public:
    string vehicleType;
    int vehicleYear;
    bool isElectricCar;
    int numberOfCharges;

    Vehicle() : vehicleType("Default Vehicle"), vehicleYear(0), isElectricCar(true), numberOfCharges(0) {}

    Vehicle(string type, int year, bool electric, int charges) : vehicleType(type), vehicleYear(year), isElectricCar(electric), numberOfCharges(charges) {}

    void printVehicleInfo() {
        cout << "Vehicle Type: " << vehicleType << ", Year: " << vehicleYear << ", Electric Vehicle: " << (isElectricCar ? "true" : "false") << ", Charges: " << numberOfCharges << endl;
    }
};

class Truck : public Vehicle {
public:
    float averageRating;
    int numberOfWheels;

    Truck() : averageRating(0.0), numberOfWheels(4) {}

    Truck(float rating, int wheels, string type, int year, bool electric, int charges) : averageRating(rating), numberOfWheels(wheels), Vehicle(type, year, electric, charges) {}

    Truck(float rating, int wheels, Vehicle& vehicle) : averageRating(rating), numberOfWheels(wheels), Vehicle(vehicle) {}

    void printTruckInfo() {
        cout << "Average Rating: " << averageRating << " Number of wheels: " << numberOfWheels << endl;
    }
};

class Car : public Vehicle {
public:
    int numberOfHorsepower;
    string nameOfManufacturer;

    Car() : numberOfHorsepower(230), nameOfManufacturer("BMW") {}

    Car(int horsepower, string manufacturer, string type, int year, bool electric, int charges) : numberOfHorsepower(horsepower), nameOfManufacturer(manufacturer), Vehicle(type, year, electric, charges) {}


    Car(int horsepower, string manufacturer, Vehicle& vehicle) : numberOfHorsepower(horsepower), nameOfManufacturer(manufacturer), Vehicle(vehicle) {}

    void printCarInfo() {
        cout << "Number of HorsePower: " << numberOfHorsepower << ", Manufacturer's name: " << nameOfManufacturer << endl;
    }
};

int main() {
    Company c1("Dobriy Cola", 280, true, "Tajikistan");
    c1.printCompanyInfo();

    Employee e1("Artemiy", 50, true, 4);
    e1.printEmployeeInfo();

    Vehicle v1("Bus",1995 , true, 4);
    v1.printVehicleInfo();

    Truck t1(4.6, 6, "Truck", 2007, true, 4);
    t1.printTruckInfo();
    t1.printVehicleInfo();

    Car car1(260, "BMW", "Car ", 2023, true, 4);
    car1.printCarInfo();
    car1.printVehicleInfo();

    return 0;
}