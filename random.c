#include "random.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar()
{
    return "ABCDEFGHIJKLMNOPQRSTUVWXYZ"[random() % 26];
}