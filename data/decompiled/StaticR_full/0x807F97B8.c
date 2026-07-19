/* Function at 0x807F97B8, size=148 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807F97B8(int r3, int r4)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x807F97C0
    *(0x5c + r1) = r31; // stw @ 0x807F97C8
    *(0x58 + r1) = r30; // stw @ 0x807F97CC
    r30 = r3;
    /* lfs f0, 0(r4) */ // 0x807F97D4
    r4 = r4 + 0; // 0x807F97D8
    /* stfs f0, 0xd8(r3) */ // 0x807F97DC
    r0 = *(0x54 + r3); // lbz @ 0x807F97E0
    /* lfs f0, 4(r4) */ // 0x807F97E4
    /* stfs f0, 0xdc(r3) */ // 0x807F97E8
    /* li r0, 0 */ // 0x807F97F0
    /* lfs f0, 8(r4) */ // 0x807F97F4
    /* stfs f0, 0xe0(r3) */ // 0x807F97F8
    *(0xf0 + r3) = r0; // stb @ 0x807F97FC
    *(0xf4 + r3) = r0; // stw @ 0x807F9800
    *(0xfc + r3) = r0; // stw @ 0x807F9804
    if (==) goto 0x0x807f9814;
    r4 = r3 + 0x48; // 0x807F980C
    /* b 0x807f9844 */ // 0x807F9810
    /* li r0, 1 */ // 0x807F9814
    *(0x54 + r3) = r0; // stb @ 0x807F9818
    r4 = r30 + 0x58; // 0x807F9820
    FUN_8070E704(r3, r4); // bl 0x8070E704
    /* lfs f0, 8(r1) */ // 0x807F9828
    r4 = r30 + 0x48; // 0x807F982C
    /* stfs f0, 0x48(r30) */ // 0x807F9830
    /* lfs f0, 0xc(r1) */ // 0x807F9834
    /* stfs f0, 0x4c(r30) */ // 0x807F9838
    /* lfs f0, 0x10(r1) */ // 0x807F983C
    /* stfs f0, 0x50(r30) */ // 0x807F9840
    FUN_805E3430(r3); // bl 0x805E3430
}