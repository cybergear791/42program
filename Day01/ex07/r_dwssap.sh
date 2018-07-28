cat /etc/passwd | tail -n +11 | cut -d : -f 1 | rev |sort -r |tr "\n" "," | cut -d , -f $FT_LINE1-$FT_LINE2 | sed 's/,/,/g' | tr "\n" "."
