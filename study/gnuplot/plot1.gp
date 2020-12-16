# Scale font and line width (dpi) by chaning the size! It will always display stretched.
set term png size 1920,1080 enhanced font 'georgia,24' butt
set output 'function.png'

# Key means label...
set key inside bottom right
set xlabel 'x'
set ylabel 'f(x)'
set title 'f(x) = x^2'
# set style line 1 lc rgb '#000000'
# set style line 7 lc rgb 'royalblue' pt 7 ps 10
# plot "data.txt" using 1:2 title 'y=x^2' with lines
plot "data.txt" using 1:2 title 'y=x^2' with lines ls 1 lc rgb 'royalblue'
