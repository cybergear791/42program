ldapsearch -H ldap://ldap-master.42.us.org 'sn=*bon*' sn | grep '^sn:' | wc -l | sed 's/ //g'
