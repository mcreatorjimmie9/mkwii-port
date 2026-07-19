/* Function at 0x806F4CDC, size=96 bytes */
/* Stack frame: 0 bytes */

void FUN_806F4CDC(int r3, int r4, int r5)
{
    r0 = *(0 + r3); // lbz @ 0x806F4CDC
    if (!=) goto 0x0x806f4cf0;
    /* li r3, 0 */ // 0x806F4CE8
    return;
    /* lis r5, 0 */ // 0x806F4CF0
    /* li r4, 1 */ // 0x806F4CF4
    r5 = *(0 + r5); // lwz @ 0x806F4CF8
    r0 = *(0x291c + r5); // lwz @ 0x806F4CFC
    /* mulli r0, r0, 0x58 */ // 0x806F4D00
    r5 = r5 + r0; // 0x806F4D04
    r0 = *(0x59 + r5); // lbz @ 0x806F4D08
    r5 = *(0x48 + r5); // lwz @ 0x806F4D0C
    r0 = r4 << r0; // slw
    /* andc. r5, r5, r0 */ // 0x806F4D14
    if (==) goto 0x0x806f4d34;
    r0 = *(0x9e4 + r3); // lwz @ 0x806F4D1C
    r0 = r5 & r0; // 0x806F4D20
    /* subf r0, r5, r0 */ // 0x806F4D24
    /* cntlzw r0, r0 */ // 0x806F4D28
    /* srwi r3, r0, 5 */ // 0x806F4D2C
    return;
    /* li r3, 0 */ // 0x806F4D34
    return;
}