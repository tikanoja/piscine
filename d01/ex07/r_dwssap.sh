#!/bin/sh
cat /etc/passwd | grep -v "#" | sed -n 'n;p' | cut -d ':' -f1 | rev | sed 's/\n/, /'
