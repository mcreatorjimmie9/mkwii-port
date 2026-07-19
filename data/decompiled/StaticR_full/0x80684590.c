/* Function at 0x80684590, size=20 bytes */
/* Stack frame: 0 bytes */

int FUN_80684590(int r3)
{
    r3 = *(0xc + r3); // lwz @ 0x80684590
    /* neg r0, r3 */ // 0x80684594
    r0 = r0 | r3; // 0x80684598
    /* srwi r3, r0, 0x1f */ // 0x8068459C
    return;
}