/* Function at 0x807B3F64, size=212 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 6 function(s) */

int FUN_807B3F64(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r4, 1 */ // 0x807B3F6C
    /* li r5, 1 */ // 0x807B3F70
    /* li r6, 7 */ // 0x807B3F78
    *(0x2c + r1) = r31; // stw @ 0x807B3F7C
    *(0x28 + r1) = r30; // stw @ 0x807B3F80
    *(0x24 + r1) = r29; // stw @ 0x807B3F84
    *(0x20 + r1) = r28; // stw @ 0x807B3F88
    r28 = r3;
    FUN_807B0D98(); // bl 0x807B0D98
    /* li r29, 0 */ // 0x807B3F94
    *(0x1e4 + r28) = r29; // stw @ 0x807B3F98
    /* lis r30, 0 */ // 0x807B3F9C
    /* lis r31, 0 */ // 0x807B3FA0
    *(0x1e8 + r28) = r29; // stw @ 0x807B3FA4
    /* li r4, 0 */ // 0x807B3FA8
    r3 = *(4 + r28); // lwz @ 0x807B3FAC
    /* lfs f1, 0(r30) */ // 0x807B3FB0
    r3 = *(0x28 + r3); // lwz @ 0x807B3FB4
    /* lfs f2, 0(r31) */ // 0x807B3FB8
    FUN_805E70EC(r4); // bl 0x805E70EC
    r3 = *(8 + r28); // lwz @ 0x807B3FC0
    /* li r4, 5 */ // 0x807B3FC4
    /* lfs f1, 0(r30) */ // 0x807B3FC8
    r3 = *(0x28 + r3); // lwz @ 0x807B3FCC
    /* lfs f2, 0(r31) */ // 0x807B3FD0
    FUN_805E70EC(r4); // bl 0x805E70EC
    r3 = *(0x1cc + r28); // lwz @ 0x807B3FD8
    FUN_8061DC48(); // bl 0x8061DC48
    r4 = r3;
    /* lis r5, 0 */ // 0x807B3FE4
    r4 = r4 + 0xf0; // 0x807B3FEC
    r5 = r5 + 0; // 0x807B3FF0
    FUN_805A4428(r4, r5, r3, r4, r5); // bl 0x805A4428
    /* lis r4, 0 */ // 0x807B3FF8
    /* lfs f0, 0x18(r1) */ // 0x807B3FFC
    /* lfs f4, 0(r4) */ // 0x807B4000
    /* lis r3, 0 */ // 0x807B4004
    /* lfs f3, 0x14(r1) */ // 0x807B4008
    /* fmuls f2, f0, f4 */ // 0x807B400C
    /* lfs f1, 0x1c(r1) */ // 0x807B4010
    /* lfs f0, 0(r3) */ // 0x807B4014
    /* fmuls f3, f3, f4 */ // 0x807B4018
    /* fmuls f1, f1, f4 */ // 0x807B401C
    /* fadds f0, f2, f0 */ // 0x807B4020
    /* stfs f3, 0x14(r1) */ // 0x807B4024
    /* stfs f1, 0x1c(r1) */ // 0x807B4028
    /* stfs f0, 0x18(r1) */ // 0x807B402C
    r3 = *(0x1cc + r28); // lwz @ 0x807B4030
    FUN_8061DA88(); // bl 0x8061DA88
}