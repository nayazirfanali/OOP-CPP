#include <iostream>
#include <string>
using namespace std;

class Patient {
protected:
    string patientName;
    string bedNumber;
    string wardName;
public:
    void getPatientDetails() {
        cout << "Enter Patient Name: ";
        cin >> patientName;
        cout << "Enter Bed Number: ";
        cin >> bedNumber;
        cout << "Enter Ward Name: ";
        cin >> wardName;
    }
};

class Doctor {
protected:
    string doctorName;
    string doctorateDegree;
public:
    void getDoctorDetails() {
        cout << "Enter the Doctor Name: ";
        cin >> doctorName;
        cout << "Enter Doctorate Degree: ";
        cin >> doctorateDegree;
    }
};

class PatientDetails : public Patient, public Doctor {
private:
    double dues;
public:
    void getDues() {
        cout << "Enter Dues of Patient: ";
        cin >> dues;
    }
    void displayDetails() {
        cout << "Inserted Data is:" << endl;
        cout << "Patient Name: " << patientName << endl;
        cout << "Bed Number: " << bedNumber << endl;
        cout << "Ward Name: " << wardName << endl;
        cout << "Doctor Name: " << doctorName << endl;
        cout << "Doctorate Degree: " << doctorateDegree << endl;
        cout << "Total Dues of Patient: " << dues << endl;
    }
};

int main() {
    PatientDetails pd;
    pd.getPatientDetails();
    pd.getDoctorDetails();
    pd.getDues();
    pd.displayDetails();
    return 0;
}
