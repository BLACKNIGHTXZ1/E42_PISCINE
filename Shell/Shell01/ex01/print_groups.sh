#groups ${FT_USER} | tr '\n' ',' | sed 's/,*$//'
id -nG ${FT_USER} | tr ' ' ',' | sed 's/,*$//'
