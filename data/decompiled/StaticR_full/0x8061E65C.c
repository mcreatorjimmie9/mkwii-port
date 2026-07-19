/* Function at 0x8061E65C, size=24 bytes */
/* Stack frame: 0 bytes */

int FUN_8061E65C(int r3)
{
    r3 = *(0 + r3); // lwz @ 0x8061E65C
    r3 = *(0x24 + r3); // lwz @ 0x8061E660
    /* neg r0, r3 */ // 0x8061E664
    r0 = r0 | r3; // 0x8061E668
    /* srwi r3, r0, 0x1f */ // 0x8061E66C
    return;
}