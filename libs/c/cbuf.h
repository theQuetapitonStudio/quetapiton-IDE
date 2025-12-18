#ifndef CBUF_H
#define CBUF_H

#include <stdio.h>

static inline void cbuf(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

#endif
