sed -n '7,15p' /etc/passwd | grep -v '^#' | awk -F: '{print $1}' | tac | sed 's/.*/&_/g' | paste -sd , - | sed 's/,$/\./'
