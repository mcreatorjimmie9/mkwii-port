/* Function at 0x80842F48, size=40 bytes */
/* Stack frame: 0 bytes */

int FUN_80842F48(int r3, int r4, int r5, int r6, int r7)
{
    r7 = r3;
    r3 = *(4 + r3); // lwz @ 0x80842F4C
    r0 = r4;
    r6 = r5;
    r12 = *(0 + r3); // lwz @ 0x80842F58
    r4 = r7;
    r5 = r0;
    r12 = *(0x118 + r12); // lwz @ 0x80842F64
    /* mtctr r12 */ // 0x80842F68
    /* bctr  */ // 0x80842F6C
}