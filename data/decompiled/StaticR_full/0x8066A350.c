/* Function at 0x8066A350, size=28 bytes */
/* Stack frame: 0 bytes */

int FUN_8066A350(int r3, int r4)
{
    /* slwi r0, r4, 2 */ // 0x8066A350
    r4 = r3 + r4; // 0x8066A354
    r3 = r3 + r0; // 0x8066A358
    *(0x1c + r3) = r5; // stw @ 0x8066A35C
    *(0x40 + r4) = r6; // stb @ 0x8066A360
    *(0x49 + r4) = r7; // stb @ 0x8066A364
    return;
}