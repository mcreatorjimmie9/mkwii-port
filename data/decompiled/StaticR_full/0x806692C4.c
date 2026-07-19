/* Function at 0x806692C4, size=24 bytes */
/* Stack frame: 0 bytes */

int FUN_806692C4(int r3, int r4)
{
    /* slwi r0, r4, 2 */ // 0x806692C4
    r4 = r3 + r4; // 0x806692C8
    r3 = r3 + r0; // 0x806692CC
    *(0x40 + r3) = r5; // stw @ 0x806692D0
    *(0x64 + r4) = r6; // stb @ 0x806692D4
    return;
}