# Scale font and line width (dpi) by changing the size! It will always display stretched.
set term svg size 800,800 enhanced font 'calibri,12' background rgb 'beige'
set output 'g_derivatives.svg'

# Key means label...
set key inside bottom right
set grid
set xrange [-10:10]
set yrange [-10:10]
unset ylabel
unset xlabel
set title 'Derivatives of function 23: COS^2(X/2)'
plot cos(x/2)*cos(x/2) w lines title '(actual values) COS^2(X/2)' lc rgb '#35477d' lw 2, \
"derivative.dat" using 1:2 title '(calculated values) COS^2(X/2)' w lines lc rgb '#bbded6' lw 2,\
-sin(x)/2 w lines lc rgb '#35477d' lw 2 title '(actual values) COS^2''(X/2)',\
"derivative.dat" using 1:4 title '(calculated values) COS^2''(X/2)' w lines lc rgb '#fae3d9' lw 2,\
-cos(x)/2 w lines lc rgb '#35477d' lw 2 title '(actual values) COS^2''\''(X/2)', \
"derivative.dat" using 1:6 title '(calculated values) COS^2''\''(X/2)' w lines lc rgb '#ffb6b9' lw 2\
