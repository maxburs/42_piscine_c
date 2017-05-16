ldapsearch -LLL -Q 'cn=*bon*' cn | grep cn | wc -l | sed -E -e 's/ //g'
