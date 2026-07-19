/* Function at 0x8064ED64, size=24 bytes */
/* Stack frame: 0 bytes */

void FUN_8064ED64(int r3, int r4)
{
    /* li r4, 0 */ // 0x8064ED64
    /* li r0, -1 */ // 0x8064ED68
    /* stfs f1, 0(r3) */ // 0x8064ED6C
    *(4 + r3) = r4; // stb @ 0x8064ED70
    *(8 + r3) = r0; // stw @ 0x8064ED74
    return;
}