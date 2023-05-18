#include<iostream>
#include<string>
using namespace std;

int compareDates(const string& date1, const string& date2) {
    if (date1 < date2) {
        return -1; // date1 is earlier than date2
    } else if (date1 > date2) {
        return 1; // date1 is later than date2
    } else {
        return 0; // dates are equal
    }
}

bool compareLines(const string& line1, const string& line2) {
    // Find the position of the last dash in each line
    size_t lastDash1 = line1.find_last_of('-');
    size_t lastDash2 = line2.find_last_of('-');

    // Extract the substrings after the last dash in each line
    string substr1 = line1.substr(lastDash1 + 1);
    string substr2 = line2.substr(lastDash2 + 1);

    // Compare the substrings
    return compareDates(substr1,substr2);
}
