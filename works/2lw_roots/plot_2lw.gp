set term svg size 1200.000000,800.000000 enhanced font 'calibri,12' backg 'white'
set output 'img_roots.svg'
set key inside bottom right
set grid
set xrange [0.000000:3.000000]
set yrange [0:2]
unset xlabel
unset ylabel
set title 'intersection point of y=0.50 and COS^2(X/2) between 0.00 and 3.00'
plot cos(x/2)*cos(x/2) w lines title 'COS^2(X/2)' lc rgb '#35477d' lw 2,\
0.500 w lines title 'y = 0.50' lc rgb 'black', '-' notitle ls 7 lc 'black'
1.571 0.500