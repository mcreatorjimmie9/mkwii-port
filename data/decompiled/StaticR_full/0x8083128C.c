/* Function at 0x8083128C, size=44 bytes */
/* Stack frame: 0 bytes */

int FUN_8083128C(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* lis r5, 0 */ // 0x8083128C
    /* lis r6, 0 */ // 0x80831290
    r4 = r3;
    r3 = *(0 + r6); // lwz @ 0x80831298
    /* lfs f1, 0(r5) */ // 0x8083129C
    r5 = r4;
    /* li r6, 0x28 */ // 0x808312A4
    /* li r7, 0xa */ // 0x808312A8
    /* li r8, 0 */ // 0x808312AC
    /* li r9, 0x1e */ // 0x808312B0
    /* b 0x80818ba4 */ // 0x808312B4
}