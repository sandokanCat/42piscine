#!/bin/bash
grep -v '^#' /etc/passwd | \
sed -n 'n;p' | \
awk -F: '{print $1}' | \
rev | \
sed -n "${FT_LINE1},${FT_LINE2}p" | \
sort -r | \
paste -sd ", " - | \
sed 's/$/./'
