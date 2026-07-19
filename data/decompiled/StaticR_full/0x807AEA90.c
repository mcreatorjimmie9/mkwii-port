/* Function at 0x807AEA90, size=392 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 8 function(s) */

int FUN_807AEA90(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r30, 0 */ // 0x807AEAA4
    r30 = r30 + 0; // 0x807AEAA8
    *(0x14 + r1) = r29; // stw @ 0x807AEAAC
    r29 = *(0x164 + r3); // lwz @ 0x807AEAB0
    if (==) goto 0x0x807aebfc;
    /* lis r4, 0 */ // 0x807AEABC
    /* li r3, 1 */ // 0x807AEAC0
    /* lfs f1, 0(r4) */ // 0x807AEAC4
    /* li r0, 0 */ // 0x807AEAC8
    /* stfs f1, 0x18(r29) */ // 0x807AEACC
    *(0x1c + r29) = r3; // stb @ 0x807AEAD0
    /* stfs f1, 0xc(r29) */ // 0x807AEAD4
    /* stfs f1, 0x10(r29) */ // 0x807AEAD8
    r3 = *(0 + r29); // lwz @ 0x807AEADC
    *(8 + r3) = r0; // stw @ 0x807AEAE0
    r3 = *(0 + r29); // lwz @ 0x807AEAE4
    FUN_807D021C(); // bl 0x807D021C
    r3 = *(0 + r29); // lwz @ 0x807AEAEC
    /* li r4, 0 */ // 0x807AEAF0
    /* lfs f1, 0x70(r30) */ // 0x807AEAF4
    /* lfs f2, 0x78(r30) */ // 0x807AEAF8
    FUN_807D0288(r4); // bl 0x807D0288
    /* lfs f0, 0x78(r30) */ // 0x807AEB00
    /* lfs f1, 0x14(r29) */ // 0x807AEB04
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807AEB08
    if (<=) goto 0x0x807aeb14;
    /* b 0x807aeb18 */ // 0x807AEB10
    /* fmr f1, f0 */ // 0x807AEB14
    /* stfs f1, 0x14(r29) */ // 0x807AEB18
    /* lis r31, 0 */ // 0x807AEB1C
    /* li r0, 0 */ // 0x807AEB20
    /* lfs f1, 0(r31) */ // 0x807AEB24
    r3 = *(4 + r29); // lwz @ 0x807AEB28
    *(8 + r3) = r0; // stw @ 0x807AEB2C
    r3 = *(4 + r29); // lwz @ 0x807AEB30
    FUN_807D021C(); // bl 0x807D021C
    /* lis r4, 0 */ // 0x807AEB38
    r3 = *(4 + r29); // lwz @ 0x807AEB3C
    /* lfs f1, 0(r4) */ // 0x807AEB40
    /* li r4, 0 */ // 0x807AEB44
    /* lfs f2, 0x7c(r30) */ // 0x807AEB48
    FUN_807D0288(r4, r4); // bl 0x807D0288
    r3 = *(4 + r29); // lwz @ 0x807AEB50
    /* li r4, 0 */ // 0x807AEB54
    /* lfs f1, 0(r31) */ // 0x807AEB58
    /* lfs f2, 0x80(r30) */ // 0x807AEB5C
    FUN_807D0288(r4); // bl 0x807D0288
    /* lfs f0, 0x78(r30) */ // 0x807AEB64
    /* lfs f1, 0x14(r29) */ // 0x807AEB68
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807AEB6C
    if (<=) goto 0x0x807aeb78;
    /* b 0x807aeb7c */ // 0x807AEB74
    /* fmr f1, f0 */ // 0x807AEB78
    /* stfs f1, 0x14(r29) */ // 0x807AEB7C
    /* lis r31, 0 */ // 0x807AEB80
    /* li r0, 0 */ // 0x807AEB84
    /* lfs f1, 0(r31) */ // 0x807AEB88
    r3 = *(8 + r29); // lwz @ 0x807AEB8C
    *(8 + r3) = r0; // stw @ 0x807AEB90
    r3 = *(8 + r29); // lwz @ 0x807AEB94
    FUN_807D021C(); // bl 0x807D021C
    r3 = *(8 + r29); // lwz @ 0x807AEB9C
    /* li r4, 0 */ // 0x807AEBA0
    /* lfs f1, 0(r31) */ // 0x807AEBA4
    /* lfs f2, 0x7c(r30) */ // 0x807AEBA8
    FUN_807D0288(r4); // bl 0x807D0288
    /* lis r4, 0 */ // 0x807AEBB0
    r3 = *(8 + r29); // lwz @ 0x807AEBB4
    /* lfs f1, 0(r4) */ // 0x807AEBB8
    /* lfs f2, 0x80(r30) */ // 0x807AEBBC
    r4 = *(0x8c + r30); // lha @ 0x807AEBC0
    FUN_807D0288(r4); // bl 0x807D0288
    /* lfs f1, 0x7c(r30) */ // 0x807AEBC8
    /* lfs f0, 0x80(r30) */ // 0x807AEBCC
    /* lfs f2, 0x14(r29) */ // 0x807AEBD0
    /* fadds f0, f1, f0 */ // 0x807AEBD4
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x807AEBD8
    if (<=) goto 0x0x807aebe4;
    /* b 0x807aebe8 */ // 0x807AEBE0
    /* fmr f2, f0 */ // 0x807AEBE4
    /* stfs f2, 0x14(r29) */ // 0x807AEBE8
    /* li r0, 0 */ // 0x807AEBEC
    *(0x1c + r29) = r0; // stb @ 0x807AEBF0
    /* lfs f0, 0x74(r30) */ // 0x807AEBF4
    /* stfs f0, 0x10(r29) */ // 0x807AEBF8
    r0 = *(0x24 + r1); // lwz @ 0x807AEBFC
    r31 = *(0x1c + r1); // lwz @ 0x807AEC00
    r30 = *(0x18 + r1); // lwz @ 0x807AEC04
    r29 = *(0x14 + r1); // lwz @ 0x807AEC08
    return;
}