/*
Write program so that it calculates and displays:
+ dialogue with user for obtaining symbol string
+ symbol with min value (according to ASCII integer value)
+ symbol with max value (according to ASCII integer value)
+ symbol with avg value (according to ASCII integer value)
+ median value of symbol string (according to ASCII integer value)
+ mode(s) value(s) of symbol string (according to ASCII integer value)
+ sorted symbol string in one row and corresponding symbol string ASCII integer values in next row
+ sort symbol string in alphabetical order (A,B,C,...,a,b,c,...) (according to ASCII integer value)

upload to github figure with histogram of data // use gnuplot
append report [nano works/3lw_derivative/README.md] // w image, eg md file (outiside/inside)
save history [history > history_yyyymmdd.txt]
upload repository [./git-upload yyyymmdd_hh_mm]
*/
/*

1. Array to sort:
take number, go through and calculate how many times number appears

1.1
number_to_verify
count_of_number_to_verify
1.2
max_count = last val of count_of_number_to_verify
number_with_max_count = number_to_verify

2.1
go through elements and for every element calculate (sequently change number_to_verify)
count_of_number_to_verify


2.2
verify does count_of_number to verify is bigger than max_count => max_count = count_of_number_to_verify
and remember number_with_max_count = number_to_verify

==================

go through number second time (count appearance) and output all numbers, that have appearance equal to max_count

*/
