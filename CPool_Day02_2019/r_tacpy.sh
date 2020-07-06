#!
cut -d: -f1 | sed -n "1~2p"| rev | sed -ne "$MY_LINE1,$MY_LINE2 p" | tr "\n" "," | sed -e "s/,/,\ /g; s/,\ $/,\,/g" | sort -r
