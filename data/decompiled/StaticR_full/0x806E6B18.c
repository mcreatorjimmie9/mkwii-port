/* Function at 0x806E6B18, size=64 bytes */
/* Stack frame: 0 bytes */

int FUN_806E6B18(int r3, int r4, int r5, int r6)
{
    r0 = *(0x291c + r3); // lwz @ 0x806E6B18
    /* li r5, 1 */ // 0x806E6B1C
    /* li r6, 0 */ // 0x806E6B20
    /* mulli r0, r0, 0x58 */ // 0x806E6B24
    r4 = r3 + r0; // 0x806E6B28
    r3 = *(0x59 + r4); // lbz @ 0x806E6B2C
    r0 = *(0x48 + r4); // lwz @ 0x806E6B30
    r3 = r5 << r3; // slw
    /* and. r0, r3, r0 */ // 0x806E6B38
    if (==) goto 0x0x806e6b50;
    r0 = *(0x40 + r4); // lwz @ 0x806E6B40
    if (<=) goto 0x0x806e6b50;
    /* li r6, 1 */ // 0x806E6B4C
    r3 = r6;
    return;
}