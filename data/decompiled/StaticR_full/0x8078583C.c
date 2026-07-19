/* Function at 0x8078583C, size=216 bytes */
/* Stack frame: 192 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_8078583C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -192(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    *(0xb4 + r1) = r29; // stw @ 0x80785854
    *(0xb0 + r1) = r28; // stw @ 0x80785858
    FUN_808A1BCC(); // bl 0x808A1BCC
    r4 = *(0x58 + r31); // lwz @ 0x80785860
    /* lis r3, 0 */ // 0x80785864
    r0 = *(0x5c + r31); // lwz @ 0x80785868
    r28 = r3 + 0; // 0x8078586C
    *(0x84 + r1) = r0; // stw @ 0x80785870
    /* lis r29, 0 */ // 0x80785874
    /* lfs f4, 0(r3) */ // 0x80785878
    /* lis r30, 0 */ // 0x8078587C
    *(0x80 + r1) = r4; // stw @ 0x80785880
    r5 = r28;
    /* lfs f3, 4(r28) */ // 0x80785888
    r6 = *(0x60 + r31); // lwz @ 0x80785890
    r0 = *(0x64 + r31); // lwz @ 0x80785898
    *(0x8c + r1) = r0; // stw @ 0x8078589C
    /* lfs f2, 8(r28) */ // 0x807858A0
    *(0x88 + r1) = r6; // stw @ 0x807858A4
    /* lfs f1, 0(r29) */ // 0x807858A8
    r6 = *(0x68 + r31); // lwz @ 0x807858AC
    r0 = *(0x6c + r31); // lwz @ 0x807858B0
    *(0x94 + r1) = r0; // stw @ 0x807858B4
    /* lfs f0, 0(r30) */ // 0x807858B8
    *(0x90 + r1) = r6; // stw @ 0x807858BC
    r6 = *(0x70 + r31); // lwz @ 0x807858C0
    r0 = *(0x74 + r31); // lwz @ 0x807858C4
    *(0x9c + r1) = r0; // stw @ 0x807858C8
    *(0x98 + r1) = r6; // stw @ 0x807858CC
    r6 = *(0x78 + r31); // lwz @ 0x807858D0
    r0 = *(0x7c + r31); // lwz @ 0x807858D4
    *(0xa4 + r1) = r0; // stw @ 0x807858D8
    *(0xa0 + r1) = r6; // stw @ 0x807858DC
    r6 = *(0x80 + r31); // lwz @ 0x807858E0
    r0 = *(0x84 + r31); // lwz @ 0x807858E4
    *(0xac + r1) = r0; // stw @ 0x807858E8
    *(0xa8 + r1) = r6; // stw @ 0x807858EC
    /* stfs f4, 0x8c(r1) */ // 0x807858F0
    /* stfs f3, 0x9c(r1) */ // 0x807858F4
    /* stfs f2, 0xac(r1) */ // 0x807858F8
    /* lfs f2, 0x3f4(r31) */ // 0x807858FC
    /* fmuls f1, f2, f1 */ // 0x80785900
    /* stfs f0, 0x18(r1) */ // 0x80785904
    /* stfs f1, 0x14(r1) */ // 0x80785908
    /* stfs f0, 0x1c(r1) */ // 0x8078590C
    FUN_805E3430(); // bl 0x805E3430
}