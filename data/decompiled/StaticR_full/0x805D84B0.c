/* Function at 0x805D84B0, size=48 bytes */
/* Stack frame: 0 bytes */

int FUN_805D84B0(int r3, int r4, int r5)
{
    r0 = r4 >> 5; // srawi
    /* clrlwi r4, r4, 0x1b */ // 0x805D84B4
    /* slwi r0, r0, 2 */ // 0x805D84B8
    /* li r5, 1 */ // 0x805D84BC
    r3 = r3 + r0; // 0x805D84C0
    r0 = *(4 + r3); // lwz @ 0x805D84C4
    r3 = r5 << r4; // slw
    r3 = r3 & r0; // 0x805D84CC
    /* neg r0, r3 */ // 0x805D84D0
    r0 = r0 | r3; // 0x805D84D4
    /* srwi r3, r0, 0x1f */ // 0x805D84D8
    return;
}