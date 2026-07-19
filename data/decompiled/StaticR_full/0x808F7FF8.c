/* Function at 0x808F7FF8, size=92 bytes */
/* Stack frame: 0 bytes */

void FUN_808F7FF8(int r3, int r4, int r5, int r6)
{
    if (<) goto 0x0x808f8008;
    /* li r3, 0 */ // 0x808F8000
    return;
    /* lis r5, 0 */ // 0x808F8008
    /* slwi r0, r4, 2 */ // 0x808F800C
    r5 = *(0 + r5); // lwz @ 0x808F8010
    /* li r6, 0 */ // 0x808F8014
    r5 = *(0x98 + r5); // lwz @ 0x808F8018
    r5 = r5 + r0; // 0x808F801C
    r5 = *(0x12c + r5); // lwz @ 0x808F8020
    r0 = r5 + -0x18; // 0x808F8024
    if (>) goto 0x0x808f8034;
    /* li r6, 1 */ // 0x808F8030
    if (==) goto 0x0x808f8048;
    r5 = r4;
    /* li r4, 1 */ // 0x808F8040
    /* b 0x808f823c */ // 0x808F8044
    r6 = r4;
    /* li r4, 1 */ // 0x808F804C
    /* b 0x808f80d8 */ // 0x808F8050
}