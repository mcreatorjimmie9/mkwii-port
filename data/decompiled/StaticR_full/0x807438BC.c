/* Function at 0x807438BC, size=112 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807438BC(int r3, int r4, int r5)
{
    /* Stack frame: -112(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x807438C4
    r0 = *(4 + r3); // lwz @ 0x807438CC
    *(0x6c + r1) = r31; // stw @ 0x807438D0
    *(0x68 + r1) = r30; // stw @ 0x807438D4
    r30 = r4;
    r4 = *(0 + r3); // lwz @ 0x807438DC
    *(0x54 + r1) = r0; // stw @ 0x807438E0
    r0 = *(8 + r3); // lwz @ 0x807438E4
    /* lfs f0, 0x54(r1) */ // 0x807438E8
    *(0x50 + r1) = r4; // stw @ 0x807438EC
    /* fabs f1, f0 */ // 0x807438F0
    /* lfs f0, 0(r5) */ // 0x807438F4
    *(0x58 + r1) = r0; // stw @ 0x807438F8
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807438FC
    if (>=) goto 0x0x80743908;
    /* stfs f0, 0x54(r1) */ // 0x80743904
    /* lis r31, 0 */ // 0x80743908
    /* lfs f2, 8(r3) */ // 0x8074390C
    /* lfs f1, 0(r3) */ // 0x80743910
    /* lfs f0, 0(r31) */ // 0x80743918
    /* stfs f1, 0x44(r1) */ // 0x8074391C
    /* stfs f0, 0x48(r1) */ // 0x80743920
    /* stfs f2, 0x4c(r1) */ // 0x80743924
    FUN_805E3430(r3); // bl 0x805E3430
}