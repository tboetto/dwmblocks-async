#ifndef CONFIG_H
#define CONFIG_H

// String used to delimit block outputs in the status.
#define DELIMITER "  "

// Maximum number of Unicode characters that a block can output.
#define MAX_BLOCK_OUTPUT_LENGTH 45

// Control whether blocks are clickable.
#define CLICKABLE_BLOCKS 1

// Control whether a leading delimiter should be prepended to the status.
#define LEADING_DELIMITER 0

// Control whether a trailing delimiter should be appended to the status.
#define TRAILING_DELIMITER 0

// Define blocks for the status feed as X(icon, cmd, interval, signal).
// Scripts print their own icons, so icon is left empty. Signals are fixed:
// dwm's volume keys send `kill -44` (SIGRTMIN+10) to refresh sb-volume.
// sb-battery prints nothing without a battery, and empty blocks are skipped.
#define BLOCKS(X)                     \
    X("", "sb-pacpackages", 0, 8)     \
    X("", "sb-torrent", 20, 7)        \
    X("", "sb-disk", 1800, 3)         \
    X("", "sb-memory", 10, 14)        \
    X("", "sb-cpu", 10, 18)           \
    X("", "sb-gpu", 10, 28)           \
    X("", "sb-volume", 0, 10)         \
    X("", "sb-forecast", 18000, 5)    \
    X("", "sb-moonphase", 18000, 6)   \
    X("", "sb-clock", 60, 1)          \
    X("", "sb-internet", 5, 4)        \
    X("", "sb-battery", 5, 2)

#endif  // CONFIG_H
