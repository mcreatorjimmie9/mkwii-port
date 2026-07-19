/* Function at 0x805E7080, size=28 bytes */
/* Stack frame: 0 bytes */

int FUN_805E7080(int r3, int r4)
{
    r3 = *(0x24 + r3); // lwz @ 0x805E7080
    /* slwi r0, r4, 2 */ // 0x805E7084
    /* lwzx r3, r3, r0 */ // 0x805E7088
    /* neg r0, r3 */ // 0x805E708C
    r0 = r0 | r3; // 0x805E7090
    /* srwi r3, r0, 0x1f */ // 0x805E7094
    return;
}