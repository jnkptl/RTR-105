/*
write program that calculates and displays:
+ dialogue with user for defining value of a (start of range)
+ dialogue with user for defining value of b (  end of range)
+ dialogue with user for defining value of precision (delta_x)
+ values of   f(x) for x between a & b (calculate, save in derivative.dat file)
+ values of  f'(x) for x between a & b (calculate, save in derivative.dat file; use analytical formula)
+ values of  f'(x) for x between a & b (calculate, save in derivative.dat file; use forward difference)
+ values of f''(x) for x between a & b (calculate, save in derivative.dat file; use anayltical formula)
+ values of f''(x) for x between a & b (calculate, save in derivative.dat file; use forward difference)

upload to github figure with all curves from derivative.dat // use gnuplot
append report [nano works/3lw_derivative/README.md] // w image, eg md file (outiside/inside)
save history [history_yymmdd.txt]
upload repository [./git-upload yymmdd_hh_mm]
*/
/*
 ________________________________________________________________________________________________
|  x  || f(x) |        f'(x)       |        f'(x)      ||        f''(x)      |       f''(x)      |
|     ||      | analytical formula | finite difference || analytical formula | finite difference |
________________________________________________________________________________________________
| ... || ...  |        ...         |        ...        ||         ...        |         ...       |
| ... || ...  |        ...         |        ...        ||         ...        |         ...       |
| ... || ...  |        ...         |        ...        ||         ...        |         ...       |
|     ||      |                    |                   ||                    |                   |
|     ||      |                    |                   ||                    |                   |
 ________________________________________________________________________________________________
*/
/*
graph functions -> cos^2(x/2), first derivative, second derivative, calculated values of first and second derivatives
anayltical formula of  first derivative -      -sin(x/2)cos(x/2)        or   -sin(x)/2
anayltical formula of second derivative - (1/2)(sin^2(x/2)-cos^2(x/2))  or   -cos(x)/2
*/
