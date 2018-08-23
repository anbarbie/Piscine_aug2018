ldapsearch -Q -LLL "(uid=z*)" cn | grep "cn" | sort -d -r -f | cut -c5-
