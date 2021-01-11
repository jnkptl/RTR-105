set term svg size 800,800 enhanced font 'calibri,12' backg 'beige'
set output 'picture_derivative.svg'
set key inside bottom right
set grid
set xrange [-5:5]
set yrange [-5:5]
unset xlabel
unset ylabel
set title 'differentiate function 23'
plot cos(x/2)*cos(x/2) w lines title 'COS^2(X/2)' lc rgb '#35477d' lw 2,\
"derivative.dat" using 1:2 title '(stored values) COS^2(X/2)' w lines lc rgb '#bbded6' lw 2,\
"derivative.dat" using 1:3 w lines lc rgb '#35477d' lw 2 title '(analytical formula) COS^2''(X/2)',\
"derivative.dat" using 1:4 title '(finite difference) COS^2''(X/2)' w lines lc rgb '#fae3d9' lw 2,\
"derivative.dat" using 1:5 w lines lc rgb '#35477d' lw 2 title '(analytical formula) COS^2''\''(X/2)',\
"derivative.dat" using 1:6 title '(finite difference) COS^2''\''(X/2)' w lines lc rgb '#ffb6b9' lw 2\
