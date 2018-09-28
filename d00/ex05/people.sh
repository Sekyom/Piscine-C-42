ldapsearch -xLLL "uid=z*"| grep cn: | cut -c5- | sort -f -r
