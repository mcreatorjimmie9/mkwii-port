/* Function at 0x8086E984, size=28 bytes */
/* Stack frame: 0 bytes */

void FUN_8086E984(int r3)
{
    /* lis r3, 0 */ // 0x8086E984
    r3 = *(0 + r3); // lwz @ 0x8086E988
    r3 = *(0 + r3); // lwz @ 0x8086E98C
    /* neg r0, r3 */ // 0x8086E990
    /* andc r0, r0, r3 */ // 0x8086E994
    /* srwi r3, r0, 0x1f */ // 0x8086E998
    return;
}