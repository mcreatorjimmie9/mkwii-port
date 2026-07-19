/* Function at 0x805D8460, size=40 bytes */
/* Stack frame: 0 bytes */

int FUN_805D8460(int r3, int r4, int r5)
{
    r5 = r4 >> 5; // srawi
    /* clrlwi r0, r4, 0x1b */ // 0x805D8464
    /* slwi r5, r5, 2 */ // 0x805D8468
    /* li r4, 1 */ // 0x805D846C
    r5 = r3 + r5; // 0x805D8470
    r3 = *(4 + r5); // lwz @ 0x805D8474
    r0 = r4 << r0; // slw
    r0 = r3 | r0; // 0x805D847C
    *(4 + r5) = r0; // stw @ 0x805D8480
    return;
}