/* Function at 0x80842DCC, size=40 bytes */
/* Stack frame: 0 bytes */

int FUN_80842DCC(int r3, int r4)
{
    r4 = *(0 + r3); // lwz @ 0x80842DCC
    /* lis r3, 0x41 */ // 0x80842DD0
    r0 = r3 + -0x7fff; // 0x80842DD4
    r3 = *(4 + r4); // lwz @ 0x80842DD8
    r3 = *(8 + r3); // lwz @ 0x80842DDC
    r3 = r3 & r0; // 0x80842DE0
    /* neg r0, r3 */ // 0x80842DE4
    r0 = r0 | r3; // 0x80842DE8
    /* srwi r3, r0, 0x1f */ // 0x80842DEC
    return;
}