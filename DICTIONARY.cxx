#include <iostream>
#include <string>

using namespace std;

int main() {
    string search;
    
    cout << "Search: ";
    cin >> search;
    
    if (search == "ALGORITHM") {
        cout << "STEP-BY-STEP PROBLEM-SOLVING INSTRUCTIONS FOR COMPUTERS.";
    } 
    else if (search == "COMPILER") {
        cout << "CONVERTS CODE INTO EXECUTABLE MACHINE-READABLE INSTRUCTIONS.";
    } 
    else if (search == "VARIABLE") {
        cout << "NAMED STORAGE FOR DATA THAT CHANGES DYNAMICALLY.";
    } 
    else if (search == "FUNCTION") {
        cout << "REUSABLE BLOCK OF CODE PERFORMING SPECIFIC TASKS.";
    } 
    else if (search == "LOOP") {
        cout << "REPEATS CODE EXECUTION UNTIL A CONDITION CHANGES.";
    } 
    else if (search == "ARRAY") {
        cout << "ORDERED COLLECTION STORING MULTIPLE VALUES OF DATA.";
    } 
    else if (search == "DEBUGGING") {
        cout << "FINDING AND FIXING ERRORS IN PROGRAM CODE.";
    } 
    else if (search == "SYNTAX") {
        cout << "SET OF RULES DEFINING PROGRAMMING LANGUAGE STRUCTURE.";
    } 
    else if (search == "OBJECT") {
        cout << "DATA STRUCTURE COMBINING VARIABLES AND RELATED FUNCTIONS.";
    } 
    else if (search == "CLASS") {
        cout << "BLUEPRINT FOR CREATING OBJECTS IN OBJECT-ORIENTED PROGRAMMING.";
    } 
    else if (search == "IDE") {
        cout << "SOFTWARE FOR WRITING AND TESTING CODE EFFICIENTLY.";
    } 
    else if (search == "RECURSION") {
        cout << "FUNCTION CALLING ITSELF FOR SOLVING PROBLEMS ITERATIVELY.";
    } 
    else if (search == "DATABASE") {
        cout << "ORGANIZED COLLECTION OF DATA FOR EFFICIENT RETRIEVAL.";
    } 
    else if (search == "FRAMEWORK") {
        cout << "PREDEFINED CODE STRUCTURE SIMPLIFYING SOFTWARE DEVELOPMENT.";
    } 
    else if (search == "BACKEND") {
        cout << "SERVER-SIDE LOGIC HANDLING APPLICATION PROCESSING OPERATIONS.";
    } 
    else if (search == "FRONTEND") {
        cout << "USER INTERFACE PART OF A SOFTWARE APPLICATION.";
    } 
    else if (search == "API") {
        cout << "INTERFACE ALLOWING SOFTWARE COMMUNICATION AND INTERACTION.";
    } 
    else if (search == "LIBRARY") {
        cout << "COLLECTION OF PREWRITTEN CODE FOR SPECIFIC FUNCTIONALITIES.";
    } 
    else if (search == "VERSION_CONTROL") {
        cout << "SYSTEM TRACKING CODE CHANGES FOR COLLABORATION MANAGEMENT.";
    } 
    else if (search == "CLOUD_COMPUTING") {
        cout << "INTERNET-BASED COMPUTING SERVICES FOR STORAGE AND PROCESSING.";
    } 
    else if (search == "BIG_O_NOTATION") {
        cout << "DESCRIBES ALGORITHM EFFICIENCY BASED ON INPUT SIZE.";
    } 
    else if (search == "DATA_STRUCTURE") {
        cout << "ORGANIZING DATA FORMAT FOR EFFICIENT MANIPULATION.";
    } 
    else if (search == "ENCRYPTION") {
        cout << "SECURING DATA BY CONVERTING IT INTO UNREADABLE FORMAT.";
    } 
    else if (search == "HASHING") {
        cout << "GENERATING FIXED-SIZED OUTPUT FROM VARIABLE INPUT DATA.";
    } 
    else if (search == "MACHINE_LEARNING") {
        cout << "ALGORITHMS ENABLING SYSTEMS TO LEARN FROM DATA.";
    } 
    else if (search == "MICROSERVICES") {
        cout << "ARCHITECTURAL APPROACH DIVIDING APPLICATIONS INTO INDEPENDENT COMPONENTS.";
    } 
    else if (search == "MULTITHREADING") {
        cout << "RUNNING MULTIPLE TASKS SIMULTANEOUSLY WITHIN ONE PROGRAM.";
    } 
    else if (search == "ORM") {
        cout << "MAPS DATABASE TABLES TO PROGRAMMING LANGUAGE OBJECTS.";
    } 
    else if (search == "REFACTORING") {
        cout << "IMPROVING CODE STRUCTURE WITHOUT CHANGING EXTERNAL BEHAVIOR.";
    } 
    else if (search == "RUNTIME") {
        cout << "PERIOD WHEN PROGRAM EXECUTES ON HARDWARE.";
    } 
    else {
        cout << "Word not found in the dictionary.";
    }

    return 0;
}
