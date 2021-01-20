# Scale font and line width (dpi) by changing the size! It will always display stretched.
set terminal svg size 800,800 enhanced fname 'arial'  fsize 10 butt solid backg 'beige'
set output 'out.svg'

# Key means label...
unset key
set style histogram clustered
set tics scale 0.0
set yrange [0:3.2]
set xlabel 'symbols'
set ylabel 'No. of symbols'
set title 'Statistics'
set style fill solid border rgb 'pink'
set boxwidth 0.8
set ytics 1

plot for [i=1:2] 'data.txt' u 2:xtic(1) w boxes lc rgb 'orange'
