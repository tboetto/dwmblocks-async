#include "config.h"

#include "block.h"
#include "util.h"

Block blocks[] = {
    /*{"sb-mail",    600,  1 },*/
    {"sb-tasks",    10, 26 },
    {"sb-music",   0,    11 },
    {"sb-pacpackages",    0,  8 },
    {"sb-torrent",    20, 7 },
    {"sb-disk",    1800, 3 },
    {"sb-memory",  10,   14 },
    {"sb-cpu",    10,   18 },
    {"sb-gpu",    10,   28 },
    {"sb-volume",  0,    10 },
    /*{"sb-battery", 5,    3 },*/
    {"sb-forecast",    18000,    5 },
    {"sb-moonphase",    18000,    5 },
    {"sb-clock",    60,    1 },
    {"sb-internet",    5,    4 },
};

const unsigned short blockCount = LEN(blocks);
