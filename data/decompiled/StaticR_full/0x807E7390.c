/* Function at 0x807E7390, size=164 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807E7390(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x807E739C
    r31 = r3;
    FUN_807E5FFC(); // bl 0x807E5FFC
    r0 = *(0x54 + r31); // lbz @ 0x807E73A8
    /* li r3, 0 */ // 0x807E73AC
    *(0xb0 + r31) = r3; // stw @ 0x807E73B0
    if (==) goto 0x0x807e73c4;
    r4 = r31 + 0x48; // 0x807E73BC
    /* b 0x807e73f4 */ // 0x807E73C0
    /* li r0, 1 */ // 0x807E73C4
    *(0x54 + r31) = r0; // stb @ 0x807E73C8
    r4 = r31 + 0x58; // 0x807E73D0
    FUN_8070E704(r3, r4); // bl 0x8070E704
    /* lfs f0, 8(r1) */ // 0x807E73D8
    r4 = r31 + 0x48; // 0x807E73DC
    /* stfs f0, 0x48(r31) */ // 0x807E73E0
    /* lfs f0, 0xc(r1) */ // 0x807E73E4
    /* stfs f0, 0x4c(r31) */ // 0x807E73E8
    /* lfs f0, 0x10(r1) */ // 0x807E73EC
    /* stfs f0, 0x50(r31) */ // 0x807E73F0
    /* lis r3, 0 */ // 0x807E73F4
    /* lfs f1, 4(r4) */ // 0x807E73F8
    /* lfs f0, 0(r3) */ // 0x807E73FC
    /* stfs f1, 0xfc(r31) */ // 0x807E7400
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807E7404
    if (>=) goto 0x0x807e7410;
    /* b 0x807e741c */ // 0x807E740C
    /* lis r3, 0 */ // 0x807E7410
    /* lfs f0, 0(r3) */ // 0x807E7414
    /* fsubs f1, f1, f0 */ // 0x807E7418
    /* stfs f1, 0xfc(r31) */ // 0x807E741C
    r31 = *(0x1c + r1); // lwz @ 0x807E7420
    r0 = *(0x24 + r1); // lwz @ 0x807E7424
    return;
}