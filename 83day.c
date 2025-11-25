#include <stdio.h>

int main() {
    // Define enum for months
    enum Months { JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

    // Array of month names
    const char *monthNames[] = { "JAN", "FEB", "MAR", "APR", "MAY", "JUN",
                                 "JUL", "AUG", "SEP", "OCT", "NOV", "DEC" };

    // Array of days in each month (non-leap year)
    const char *monthDays[] = { "31 days", "28 or 29 days", "31 days", "30 days", "31 days", "30 days",
                                "31 days", "31 days", "30 days", "31 days", "30 days", "31 days" };

    // Print days for each month
    for (int i = JAN; i <= DEC; i++) {
        printf("%s = %s\n", monthNames[i], monthDays[i]);
    }

    return 0;
}
