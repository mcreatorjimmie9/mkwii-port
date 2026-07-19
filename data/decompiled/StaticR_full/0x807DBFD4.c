/* Function at 0x807DBFD4, size=52 bytes */
/* Stack frame: 16 bytes */

void FUN_807DBFD4(int r3)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x807DBFDC
    r12 = *(0 + r3); // lwz @ 0x807DBFE0
    r12 = *(0x24 + r12); // lwz @ 0x807DBFE4
    /* mtctr r12 */ // 0x807DBFE8
    /* bctrl  */ // 0x807DBFEC
    /* cntlzw r0, r3 */ // 0x807DBFF0
    /* srwi r3, r0, 5 */ // 0x807DBFF4
    r0 = *(0x14 + r1); // lwz @ 0x807DBFF8
    return;
}