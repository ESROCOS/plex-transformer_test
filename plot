gnuplot -persist << EOF
set xrange[-8:8] 
set yrange[-8:8]
set zrange[-5:5]
set cbrange[0:2]
set datafile separator ','
splot 'marker.csv' using 1:2:3 with points palette pointsize 3 pointtype 7 
EOF

