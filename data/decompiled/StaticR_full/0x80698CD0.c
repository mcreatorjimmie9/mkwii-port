/* Function at 0x80698CD0, size=100 bytes */
/* Stack frame: 0 bytes */

void FUN_80698CD0(int r3, int r4, int r6)
{
    r6 = *(0x30 + r3); // lwz @ 0x80698CD0
    r0 = r6 + -1; // 0x80698CD4
    if (<=) goto 0x0x80698d08;
    if (==) goto 0x0x80698cf4;
    if (==) goto 0x0x80698d28;
    return;
    /* li r0, 2 */ // 0x80698CF4
    *(0x30 + r3) = r0; // stw @ 0x80698CF8
    *(0x1c + r3) = r4; // stw @ 0x80698CFC
    *(0x28 + r3) = r5; // stw @ 0x80698D00
    return;
    r0 = *(0x1c + r3); // lwz @ 0x80698D08
    /* li r6, 2 */ // 0x80698D0C
    *(0x30 + r3) = r6; // stw @ 0x80698D10
    /* bgelr  */ // 0x80698D18
    *(0x1c + r3) = r4; // stw @ 0x80698D1C
    *(0x28 + r3) = r5; // stw @ 0x80698D20
    return;
    /* li r0, 5 */ // 0x80698D28
    *(0x30 + r3) = r0; // stw @ 0x80698D2C
    return;
}