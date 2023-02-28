# Tutorials

## When using math.h

When we try to use math.h in the terminal then, an issue arises stating
```
/usr/bin/ld: /tmp/ccoMrdix.o: in function `main':
test.c:(.text+0xa8): undefined reference to `pow'
collect2: error: ld returned 1 exit status
```

To eliminate this error use `-lm` in the end.

Syntax : `gcc <filename>.c -lm`
