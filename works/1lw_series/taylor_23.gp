# Scale font and line width (dpi) by chaning the size! It will always display stretched.
set term png size 800,800 enhanced font 'georgia,12' butt
set output 'function.png'

# Key means label...
set key inside bottom right
set yrange [-3:3]
set xrange [-9:9]
set grid
set xlabel 'x'
set ylabel 'f(x)'
set title 'f(x) = cos^2(x/2)'
plot cos(x/2)*cos(x/2) title 'cos^2(x/2)' lc rgb 'black', 1 title '0th order' lc rgb 'red', 1-x**2/4 title '2nd order' lc rgb 'orange', 1-x**2/4+x**4/48 title '4th order' lc rgb 'yellow', 1-x**2/4+x**4/48-x**6/1440 title '6th order' lc rgb 'green', 1-x**2/4+x**4/48-x**6/1440+x**8/80640 title '8th order' lc rgb 'blue', 1-x**2/4+x**4/48-x**6/1440+x**8/80640-x**10/7257600 title '10th order' lc rgb 'purple',  1-x**2/4+x**4/48-x**6/1440+x**8/80640-x**10/7257600+x**12/958003200 title '12th order' lc rgb 'violet'
