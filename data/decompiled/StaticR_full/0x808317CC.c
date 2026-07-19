/* Function at 0x808317CC, size=24 bytes */
/* Stack frame: 48 bytes */

void FUN_808317CC(int r6, int r8)
{
    /* Stack frame: -48(r1) */
    /* lfs f0, 0(r6) */ // 0x808317D4
    *(0x34 + r1) = r0; // stw @ 0x808317D8
    /* fneg f0, f0 */ // 0x808317E0
}