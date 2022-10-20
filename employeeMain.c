//Compile using the following command: gcc employeeMain.c employeeTable.c employeeOne.c 

//gcc employeeMain.c employeeTable.c employeeTwo.c 
#include <string.h> 
#include <stdlib.h> 
#include "employee.h" 
int main(void){
    
    //defined in employeeSearchOne.c 
    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind); 
    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char * nameToFind); 
    PtrToEmployee searchEmployeeByPhoneNumber(const Employee table[], int sizeTable, char * phoneNumberToFind); 
    PtrToEmployee searchEmployeeBySalary(const Employee table[], int sizeTable, double salaryToFind); 
    //defined in employeeTable.c 
    extern Employee EmployeeTable[];     
    extern const int EmployeeTableEntries;   

    PtrToEmployee matchPtr;  //Declaration 
    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1045); 

    //Example not found 
    if (matchPtr != NULL) 
        printf("Employee ID 1045 is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee ID is NOT found in the record\n"); 
    //Example found 

    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat"); 
    if (matchPtr != NULL) 
        printf("Employee Tony Bobcat is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee Tony Bobcat is NOT found in the record\n"); 

    //add code for successful find on employee salary and employee phone number
    matchPtr = searchEmployeeByPhoneNumber(EmployeeTable, EmployeeTableEntries, "714-555-2749"); 
    if (matchPtr != NULL)  
        printf("Employee Phone Number: 714-555-2749, is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee Phone Number: 714-555-2749, is NOT found in the record\n"); 
    matchPtr = searchEmployeeByPhoneNumber(EmployeeTable, EmployeeTableEntries, "714-555-2741"); 
    if (matchPtr != NULL)  
        printf("Employee Phone Number: 714-555-2741, is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee Phone Number: 714-555-2741, is NOT found in the record\n");
    

    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 8.78); 
    if (matchPtr != NULL)  
        printf("Employee Salary: $8.78, is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee Salary: $8.78, is NOT found in the record\n");
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 8.79); 
    if (matchPtr != NULL)  
        printf("Employee Salary: $8.79, is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee Salary: $8.79, is NOT found in the record\n");
    return EXIT_SUCCESS; 
}