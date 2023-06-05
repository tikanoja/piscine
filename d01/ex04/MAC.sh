ifconfig | grep ether | sort | sed '$d' | tr -d ' ' | sed 's/ether//'
