/* Function at 0x808D55D8, size=16 bytes */
/* Stack frame: 0 bytes */

void FUN_808D55D8(int r4)
{
    /* li r0, 1 */ // 0x808D55D8
    *(0x258 + r3) = r0; // stw @ 0x808D55DC
    /* li r4, 0 */ // 0x808D55E0
    /* b 0x80649fd0 */ // 0x808D55E4
}