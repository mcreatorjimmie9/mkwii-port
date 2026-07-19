/* Function at 0x807188B4, size=112 bytes */
/* Stack frame: 144 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807188B4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -144(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(0x88 + r1) = r30; // stw @ 0x807188C8
    r30 = r3;
    r0 = *(0x54 + r3); // lbz @ 0x807188D0
    if (==) goto 0x0x807188e4;
    r5 = r3 + 0x48; // 0x807188DC
    /* b 0x80718914 */ // 0x807188E0
    /* li r0, 1 */ // 0x807188E4
    *(0x54 + r3) = r0; // stb @ 0x807188E8
    r4 = r30 + 0x58; // 0x807188F0
    FUN_8070E704(r3, r4); // bl 0x8070E704
    /* lfs f0, 8(r1) */ // 0x807188F8
    r5 = r30 + 0x48; // 0x807188FC
    /* stfs f0, 0x48(r30) */ // 0x80718900
    /* lfs f0, 0xc(r1) */ // 0x80718904
    /* stfs f0, 0x4c(r30) */ // 0x80718908
    /* lfs f0, 0x10(r1) */ // 0x8071890C
    /* stfs f0, 0x50(r30) */ // 0x80718910
    r4 = r30 + 0x3c; // 0x80718918
    r6 = r30 + 0x30; // 0x8071891C
    FUN_805E3430(r3, r4, r6); // bl 0x805E3430
}