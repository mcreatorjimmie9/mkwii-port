/* Function at 0x80782A68, size=60 bytes */
/* Stack frame: 16 bytes */

void FUN_80782A68(int r3)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x80782A70
    r12 = *(0 + r3); // lwz @ 0x80782A74
    r12 = *(0x30 + r12); // lwz @ 0x80782A78
    /* mtctr r12 */ // 0x80782A7C
    /* bctrl  */ // 0x80782A80
    r0 = *(0x20 + r3); // lwz @ 0x80782A84
    r0 = r0 | 0x2121; // 0x80782A88
    r0 = r0 | 0x2121; // 0x80782A8C
    *(0x20 + r3) = r0; // stw @ 0x80782A90
    r0 = *(0x14 + r1); // lwz @ 0x80782A94
    return;
}