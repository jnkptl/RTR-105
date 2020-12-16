/*
write program which calculates and displays:
- expression of taylor series of your function (ASCII drawing)
- function definition area values in the form of a text comment
- expression of recurrence factor of Taylor series of your function (ASCII drawing)
- dialogue with user for obtaining value of x
- value of penultimate term 'h' (cannot be 0)
- value of last term 'i' (cannot be 0)
- calculate and show value of function f(x), using Taylor series
- calculate and show value of function f(x), using function

upload to github figure of your function (use gnuplot)
Append report [nano works/1lw_series/README.md] (eg of md file: outside and inside, add link to picture of function)
	explain code how taylor series works
Save history [history_yyymmdd.txt] ()
Upload repository ./git-upload yyymmdd_hh_mm

deadline: 8th January 2021

function=cos(x/2)*cos(x/2)
f(x)=cos^2(x/2)



*/
/*
 [function] calculation: -> cos(x/2)cos(x/2) calculation:
 please enter x value:
 f(x) = cos(x/2)cos(x/2) -> f(0.56) = 0.72
 a0 = 1
 a499 = [second to last value]
 a500 = [last value]
 cos(x/2)cos(x/2) via user function ->

              500
	    ________
            \             n       2n           n       2n
             \        (-1) * (x/2)         (-1) * (x/2)
cos^2(x/2) =  >      ________________  *  _______________
	     /
	    /_______     (2n)!                 (2n)!
              n=0


 Recurrence multiplier:

*/
/*
graph function -> cos^2(x/2)
taylor series of orders 1, 3, 5, 7, 9, 11, 13 plot plot -3:3 sinx, x, x-x**3/6, x-x**5/120
*/

