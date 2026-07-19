/* Function at 0x808D649C, size=128 bytes */
/* Stack frame: 0 bytes */

void FUN_808D649C(int r4, int r5, int r6, int r7, int r8, int r9)
{
    r6 = *(8 + r5); // lhz @ 0x808D649C
    /* li r7, 0 */ // 0x808D64A0
    r0 = *(8 + r4); // lhz @ 0x808D64A4
    /* li r8, 0 */ // 0x808D64A8
    /* subf. r9, r6, r0 */ // 0x808D64AC
    if (>=) goto 0x0x808d64bc;
    /* li r8, -1 */ // 0x808D64B4
    r9 = r9 + 0x3e8; // 0x808D64B8
    r6 = *(6 + r5); // lbz @ 0x808D64BC
    r0 = *(6 + r4); // lbz @ 0x808D64C0
    /* subf r0, r6, r0 */ // 0x808D64C4
    /* add. r8, r8, r0 */ // 0x808D64C8
    if (>=) goto 0x0x808d64d8;
    /* li r7, -1 */ // 0x808D64D0
    r8 = r8 + 0x3c; // 0x808D64D4
    r5 = *(4 + r5); // lhz @ 0x808D64D8
    r0 = *(4 + r4); // lhz @ 0x808D64DC
    /* subf r0, r5, r0 */ // 0x808D64E0
    /* add. r7, r7, r0 */ // 0x808D64E4
    if (>=) goto 0x0x808d64f8;
    /* li r7, 0 */ // 0x808D64EC
    /* li r8, 0 */ // 0x808D64F0
    /* li r9, 0 */ // 0x808D64F4
    /* lis r4, 0 */ // 0x808D64F8
    /* li r0, 1 */ // 0x808D64FC
    r4 = r4 + 0; // 0x808D6500
    *(0 + r3) = r4; // stw @ 0x808D6504
    *(0xa + r3) = r0; // stb @ 0x808D6508
    *(4 + r3) = r7; // sth @ 0x808D650C
    *(6 + r3) = r8; // stb @ 0x808D6510
    *(8 + r3) = r9; // sth @ 0x808D6514
    return;
}