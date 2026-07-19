/* Function at 0x80735F4C, size=244 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80735F4C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x80735F5C
    r31 = r31 + 0; // 0x80735F60
    *(8 + r1) = r30; // stw @ 0x80735F64
    r30 = r3;
    r0 = *(0x96 + r3); // lbz @ 0x80735F6C
    if (!=) goto 0x0x80736028;
    r0 = *(0x129 + r3); // lbz @ 0x80735F78
    if (==) goto 0x0x80736028;
    r0 = *(0x7b5 + r3); // lbz @ 0x80735F84
    /* extsb r0, r0 */ // 0x80735F88
    if (<=) goto 0x0x80736028;
    /* lfs f1, 0x6e8(r3) */ // 0x80735F94
    /* lfs f0, 0x28(r31) */ // 0x80735F98
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80735F9C
    if (<=) goto 0x0x80736028;
    FUN_80736204(); // bl 0x80736204
    r0 = *(0x24 + r30); // lbz @ 0x80735FA8
    if (!=) goto 0x0x80735fbc;
    r3 = *(0x118 + r30); // lwz @ 0x80735FB4
    FUN_8061F0C8(); // bl 0x8061F0C8
    /* lfs f2, 0x6f0(r30) */ // 0x80735FBC
    /* li r0, 0 */ // 0x80735FC0
    /* lfs f0, 0x6e8(r30) */ // 0x80735FC4
    *(0x7b5 + r30) = r0; // stb @ 0x80735FC8
    /* .byte 0xfc, 0x00, 0x10, 0x40 */ // 0x80735FCC
    /* cror cr0eq, cr0gt, cr0eq */ // 0x80735FD0
    if (!=) goto 0x0x80735fdc;
    /* b 0x80735ff4 */ // 0x80735FD8
    /* lfs f2, 0x28(r31) */ // 0x80735FDC
    /* .byte 0xfc, 0x00, 0x10, 0x40 */ // 0x80735FE0
    /* cror cr0eq, cr0lt, cr0eq */ // 0x80735FE4
    if (!=) goto 0x0x80735ff0;
    /* b 0x80735ff4 */ // 0x80735FEC
    /* fmr f2, f0 */ // 0x80735FF0
    /* lfs f0, 0x28(r31) */ // 0x80735FF4
    /* li r4, 1 */ // 0x80735FF8
    /* lfs f3, 0x6f0(r30) */ // 0x80735FFC
    /* li r5, 1 */ // 0x80736000
    /* lfs f1, 4(r31) */ // 0x80736004
    /* fsubs f2, f2, f0 */ // 0x80736008
    /* fsubs f3, f3, f0 */ // 0x8073600C
    /* lfs f0, 0x2c(r31) */ // 0x80736010
    r3 = *(0x118 + r30); // lwz @ 0x80736014
    /* fdivs f1, f1, f3 */ // 0x80736018
    /* fmuls f1, f2, f1 */ // 0x8073601C
    /* fadds f1, f0, f1 */ // 0x80736020
    FUN_8061DC98(); // bl 0x8061DC98
    r0 = *(0x14 + r1); // lwz @ 0x80736028
    r31 = *(0xc + r1); // lwz @ 0x8073602C
    r30 = *(8 + r1); // lwz @ 0x80736030
    return;
}