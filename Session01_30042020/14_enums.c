// 14_enums.c

#include <stdio.h>

// Enumerations
enum Filters {
   bq_type_lowpass = 0,
   bq_type_highpass,
   bq_type_bandpass,
   bq_type_notch,
   bq_type_peak,
   bq_type_lowshelf,
   bq_type_highshelf
};

enum states {
   active_mode,
   stand_by_mode,
   edit_mode,
};


int main() {

   enum Filters currentFilter = bq_type_highshelf;
   printf("currentFilter: %d\n", currentFilter);

   return 0;
}

/*
Homework:
Write a function 'printFilterType(enum Filters *filter)' that prints the filter type instead of the enum number!
Tip: Use the 'switch' statement.
*/