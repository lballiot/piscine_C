ldapsearch -xLLL "(uid=z*)" | sort -r | grep "cn:" | sed 's/^cn: //'