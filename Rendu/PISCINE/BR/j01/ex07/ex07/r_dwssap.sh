cat /etc/passwd | sed '/^#/d' | sed -e 'N;s/^.*\n//' | cut -d : -f 1 | rev |
sort -r | sed -n "$FT_LINE1", "$FT_LINE2"p | sed 's/$/,/' | tr "\n" " "
