ldapsearch -H ldap://ldap-master.42.us.org "(cn=z*)" | grep "^cn:" | cut -c 5-50 | sort -r --ignore-case
