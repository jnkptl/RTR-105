reset
# Scale font and line width (dpi) by chaning the size! It will always display stretched.
set term png size 800,800 enhanced font 'bahnschrift,24' background rgb 'beige' butt
set output 'function_of_squares.png'

# Key means label...
# set key inside bottom right
unset key
set xrange [0:100]
set yrange [0:100]
set xlabel 'x'
set ylabel 'f(x)'
set title 'f(x) = x^2'
unset style line 1
set style line 1 lt rgb "royalblue" lw 2
# set style line 7 lc rgb 'royalblue' pt 7 ps 10
# plot "data.txt" using 1:2 title 'y=x^2' with lines
plot "data.txt" using 1:2 title 'y=x^2' w lines ls 1
