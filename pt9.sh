#!/bin/bash
echo Hello!
./pt9.out
#gnuplot -persist <<-EOFMarker
#	set title "f(x)=x^2" font ",14" textcolor rgbcolor "royalblue"
#	set timefmt "%y/%m/%d"
#	set yrange [$minval:$maxval]
#	#set xdata
#	set pointsize 1
#	set terminal wxt enhanced title "y=x^2 " persist raise
#	plot "data.txt" using 1:2 with linepoints
#EOFMarker
# rest of script, after gnuplot exists
gnuplot plot1.gp
