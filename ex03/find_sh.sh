find . -name "*.sh" -print | cut -f-2 -d'.'| sed 's/\(.*\)\///g' | tr -d '/' | tr -d '.'
