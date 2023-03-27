# oct_to_dec_simple
Octal numbers to decimal simple!
In this program, the main() function accepts the value of 'n' from the user, then reads 'n' octal fractions one by one using a for loop.
For each octal fraction, the program first extracts the whole part and fraction part separately. 
Then it converts the whole and fraction parts separately to decimal using the method of successive multiplication with the base (8 in this case). 
Finally, the program displays the decimal equivalent of the octal fraction with full precision using std::numeric_limits<double>::digits10 for precision
