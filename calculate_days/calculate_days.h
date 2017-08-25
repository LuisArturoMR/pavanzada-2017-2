#ifndef CALCULATE_DAYS__
#define CALCULATE_DAYS__
typedef enum month {Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sept, Oct, Nov, Dec} Month;
// extern int daysPerMonth[] = {31,28,31,30,31,30,31,31,30,31,30,31};

int calculateDays(Month, int,int);
int isLeapYear(int);
#endif
