ifconfig | grep "ether " | grep -v "media" | tr -d "\t " | cut -c 6-
