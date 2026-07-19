/* Function at 0x80798F14, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_80798F14(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80798F20
    r31 = r3;
    FUN_80798B8C(); // bl 0x80798B8C
    r3 = *(0xdc + r31); // lwz @ 0x80798F2C
    r4 = *(0 + r3); // lwz @ 0x80798F30
    r4 = *(4 + r4); // lwz @ 0x80798F34
    r0 = *(4 + r4); // lwz @ 0x80798F38
    r0 = r0 rlwinm 0x15; // rlwinm
    *(0xe8 + r31) = r0; // stb @ 0x80798F40
    FUN_8061EA54(); // bl 0x8061EA54
    r4 = *(0xd2 + r31); // lbz @ 0x80798F48
    *(0xe9 + r31) = r3; // stb @ 0x80798F4C
    r3 = r4 + 1; // 0x80798F50
    /* clrlwi r0, r3, 0x18 */ // 0x80798F54
    *(0xd2 + r31) = r3; // stb @ 0x80798F58
    /* extsb r0, r0 */ // 0x80798F5C
    if (<=) goto 0x0x80798f70;
    /* li r0, 0x64 */ // 0x80798F68
    *(0xd2 + r31) = r0; // stb @ 0x80798F6C
    r3 = *(0xdc + r31); // lwz @ 0x80798F70
    FUN_8061E584(); // bl 0x8061E584
    /* lfs f1, 0(r3) */ // 0x80798F78
    /* lfs f0, 4(r3) */ // 0x80798F7C
    /* fmuls f1, f1, f1 */ // 0x80798F80
    /* lfs f2, 8(r3) */ // 0x80798F84
    /* fmuls f0, f0, f0 */ // 0x80798F88
    /* fmuls f2, f2, f2 */ // 0x80798F8C
    /* fadds f0, f1, f0 */ // 0x80798F90
    /* fadds f1, f2, f0 */ // 0x80798F94
    FUN_805E3430(); // bl 0x805E3430
}