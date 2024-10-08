#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    Person() {}
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }
    void setName(string name) {
        this->name = name;
    }
    void setAge(int age) {
        this->age = age;
    }
    string getName() {
        return name;
    }
    int getAge() {
        return age;
    }
  };

class Doctor : public Person {
private:
    string workingid;
    string specialization;
    double salary;
public:
    Doctor() {}
    Doctor(string name, int age, string workingid, string specialization, double salary) : Person(name, age) {
        this->workingid = workingid;
        this->specialization = specialization;
        this->salary = salary;
    }
    void setWorkingId(string workingid) {
        this->workingid = workingid;
    }
    void setSpecialization(string specialization) {
        this->specialization = specialization;
    }
    void setSalary(double salary) {
        this->salary = salary;
    }
    string getWorkingId() {
        return workingid;
    }
    string getSpecialization() {
        return specialization;
    }
    double getSalary() {
        return salary;
    }
    double calculateTax() {
        return salary * 0.02*12;
    }
    void showInfo() {
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Salary: " << salary << endl;
        cout << "Yearly Tax: " << calculateTax()<< endl;
        cout << "Working id: " << workingid << endl;
        cout << "Designation: " << specialization << endl;
    }
  };

int main() {
    Doctor doctor("Devi Shetty", 45, "1101-1 ", "Executive Director", 45000);
    doctor.showInfo();

    return 0;
  }
