#!/usr/bin/bash
#!/usr/bin/gcc

gcc $1 -o ${1%%.*}

./${1%%.*}
