#include <iostream>
#include <string>
using namespace std;


struct Employee {
    int employee_id;
    string emp_name;
    string designation;
    string department;
    float salary;
};

// Function to get information
void getInfo(Employee &e) {
    cout << "Enter Employee ID: ";
    cin >> e.employee_id;
    cin.ignore();  // clear buffer

    cout << "Enter Employee Name: ";
    getline(cin, e.emp_name);

    cout << "Enter Employee Designation: ";
    getline(cin, e.designation);

    cout << "Enter Department: ";
    getline(cin, e.department);

    cout << "Enter Salary: ";
    cin >> e.salary;
}

// Function to display information
void displayInfo(const Employee &e) {
    cout << "\nEmployee ID: " << e.employee_id;
    cout << "\nName: " << e.emp_name;
    cout << "\nDesignation: " << e.designation;
    cout << "\nDepartment: " << e.department;
    cout << "\nSalary: " << e.salary << "\n";
}

// Function to count employees in Sales department
int countSales(Employee emp[], int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(emp[i].department == "sales" || emp[i].department == "Sales")
            count++;
    }
    return count;
}

int main() {
    const int N = 10;
    Employee emp[N];

    cout << "Enter details for 10 employees:\n";

    // Get info
    for(int i = 0; i < N; i++) {
        cout << "\n--- Employee " << (i+1) << " ---\n";
        getInfo(emp[i]);
    }

    // Display info
    cout << "\n\n===== Employee Details =====\n";
    for(int i = 0; i < N; i++) {
        cout << "\n--- Employee " << (i+1) << " ---\n";
        displayInfo(emp[i]);
    }

        // Count Sales department employees
    int salesCount = countSales(emp, N);
    cout << "\nNumber of employees in Sales department: " << salesCount << endl;

    return 0;
}
