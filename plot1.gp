# Scale font and line width (dpi) by chaning the size! It will always display stretched.
# set terminal svg size 400,300 enhanced fname 'arial' fsize 10 butt solid
set output 'out.svg'

# Key means label...
set key inside bottom right
set xlabel 'x'
set ylabel 'f(x)'
set title 'f(x) = x^2'
plot "data.txt" using 1:2 with lines
