/* Function at 0x8066B700, size=56 bytes */
/* Stack frame: 0 bytes */

int FUN_8066B700(int r3, int r4)
{
    /* mulli r0, r4, 0x5c */ // 0x8066B700
    r3 = r3 + r0; // 0x8066B704
    r0 = *(0x90 + r3); // lwz @ 0x8066B708
    if (==) goto 0x0x8066b71c;
    /* li r0, 0 */ // 0x8066B714
    /* b 0x8066b720 */ // 0x8066B718
    r0 = *(0x94 + r3); // lwz @ 0x8066B71C
    /* xori r0, r0, 0x3c */ // 0x8066B720
    /* li r3, 0x3c */ // 0x8066B724
    /* cntlzw r0, r0 */ // 0x8066B728
    r0 = r3 << r0; // slw
    /* srwi r3, r0, 0x1f */ // 0x8066B730
    return;
}