/* Function at 0x806CCC2C, size=40 bytes */
/* Stack frame: 0 bytes */

int FUN_806CCC2C(int r3)
{
    r0 = *(0x90 + r3); // lbz @ 0x806CCC2C
    if (==) goto 0x0x806ccc40;
    /* li r3, 0 */ // 0x806CCC38
    return;
    /* lis r3, 0 */ // 0x806CCC40
    r3 = *(0 + r3); // lwz @ 0x806CCC44
    r3 = *(0x28 + r3); // lwz @ 0x806CCC48
    r3 = r3 + 8; // 0x806CCC4C
    return;
}