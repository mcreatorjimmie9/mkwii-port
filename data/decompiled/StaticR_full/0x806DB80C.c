/* Function at 0x806DB80C, size=92 bytes */
/* Stack frame: 0 bytes */

int FUN_806DB80C(int r3, int r4)
{
    r4 = *(0x180 + r3); // lwz @ 0x806DB80C
    r0 = r4 + -2; // 0x806DB810
    if (<=) goto 0x0x806db858;
    if (==) goto 0x0x806db830;
    if (==) goto 0x0x806db838;
    /* b 0x806db860 */ // 0x806DB82C
    /* li r3, 0 */ // 0x806DB830
    return;
    r4 = *(0x17c + r3); // lwz @ 0x806DB838
    if (<) goto 0x0x806db850;
    r3 = *(0x188 + r3); // lwz @ 0x806DB844
    r3 = r3 + 0x174; // 0x806DB848
    /* b 0x8066e138 */ // 0x806DB84C
    /* li r3, 1 */ // 0x806DB850
    return;
    /* li r3, 1 */ // 0x806DB858
    return;
    /* li r3, 0 */ // 0x806DB860
    return;
}