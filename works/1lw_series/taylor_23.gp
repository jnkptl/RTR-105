# Scale font and line width (dpi) by chaning the size! It will always display stretched.
set term svg size 800,800 enhanced font 'calibri,12' butt background 'white'
set output 'img_taylor_series_23.svg'

# Key means label...
set key inside bottom right
#unset key
set yrange [-5:5]
set xrange [-5:5]
set grid
unset xlabel
unset ylabel
set title 'Taylor Series of COS^2(X/2)'
plot cos(x/2)*cos(x/2) title 'COS^2(X/2)' lc rgb 'black' lw 2,\
1 title '1st degree taylor polynomial' lc rgb 'red' lw 2 lt 3,\
1-x**2/4 title '2nd degree taylor polynomial' lc rgb 'orange' lw 2 lt 3,\
1-x**2/4+x**4/48 title '3rd degree taylor polynomial' lc rgb 'yellow' lw 2 lt 3,\
1-x**2/4+x**4/48-x**6/1440 title '4th degree taylor polynomial' lc rgb 'green' lw 2 lt 3,\
1-x**2/4+x**4/48-x**6/1440+x**8/80640 title '5th degree taylor polynomial' lc rgb 'cyan' lw 2 lt 3,\
1-x**2/4+x**4/48-x**6/1440+x**8/80640-x**10/7257600 title '6th degree taylor polynomial' lc rgb 'blue' lw 2 lt 3,\
1-x**2/4+x**4/48-x**6/1440+x**8/80640-x**10/7257600+x**12/958003200 title '7th degree taylor polynomial' lc rgb 'violet' lw 2 lt 3
