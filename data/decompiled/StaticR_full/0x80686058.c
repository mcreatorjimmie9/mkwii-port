/* Function at 0x80686058, size=52 bytes */
/* Stack frame: 0 bytes */

int FUN_80686058(int r3, int r4, int r5)
{
    r5 = *(0x37c + r3); // lwz @ 0x80686058
    if (>=) goto 0x0x8068606c;
    /* li r3, 0 */ // 0x80686064
    return;
    r0 = r5 + -1; // 0x8068606C
    /* slwi r0, r0, 2 */ // 0x80686070
    r3 = r3 + r0; // 0x80686074
    r0 = *(0x354 + r3); // lwz @ 0x80686078
    /* subf r0, r0, r4 */ // 0x8068607C
    /* cntlzw r0, r0 */ // 0x80686080
    /* srwi r3, r0, 5 */ // 0x80686084
    return;
}