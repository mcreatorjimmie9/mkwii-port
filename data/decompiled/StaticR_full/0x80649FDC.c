/* Function at 0x80649FDC, size=440 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 12 function(s) */

int FUN_80649FDC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x80649FF0
    r29 = r3;
    FUN_806A0740(); // bl 0x806A0740
    r3 = r29 + 0x98; // 0x80649FFC
    /* li r4, 0 */ // 0x8064A000
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x8064A008
    /* li r4, 0 */ // 0x8064A00C
    /* lfs f1, 0(r5) */ // 0x8064A010
    FUN_8069F7A0(r4, r5, r4); // bl 0x8069F7A0
    r3 = *(0x64 + r29); // lwz @ 0x8064A018
    r3 = *(0xc + r3); // lwz @ 0x8064A01C
    r30 = *(0x38 + r3); // lwz @ 0x8064A020
    if (!=) goto 0x0x8064a034;
    /* li r30, 0 */ // 0x8064A02C
    /* b 0x8064a088 */ // 0x8064A030
    /* lis r31, 0 */ // 0x8064A034
    r31 = r31 + 0; // 0x8064A038
    if (==) goto 0x0x8064a084;
    r12 = *(0 + r30); // lwz @ 0x8064A040
    r3 = r30;
    r12 = *(8 + r12); // lwz @ 0x8064A048
    /* mtctr r12 */ // 0x8064A04C
    /* bctrl  */ // 0x8064A050
    /* b 0x8064a06c */ // 0x8064A054
    if (!=) goto 0x0x8064a068;
    /* li r0, 1 */ // 0x8064A060
    /* b 0x8064a078 */ // 0x8064A064
    r3 = *(0 + r3); // lwz @ 0x8064A068
    if (!=) goto 0x0x8064a058;
    /* li r0, 0 */ // 0x8064A074
    if (==) goto 0x0x8064a084;
    /* b 0x8064a088 */ // 0x8064A080
    /* li r30, 0 */ // 0x8064A084
    r3 = *(0x54 + r30); // lwz @ 0x8064A088
    r0 = r29 + 0x174; // 0x8064A08C
    /* li r5, 0 */ // 0x8064A090
    if (!=) goto 0x0x8064a0a4;
    /* li r5, 1 */ // 0x8064A09C
    /* b 0x8064a0f4 */ // 0x8064A0A0
    r3 = *(0xb0 + r30); // lwz @ 0x8064A0A4
    if (!=) goto 0x0x8064a0b8;
    /* li r5, 1 */ // 0x8064A0B0
    /* b 0x8064a0f4 */ // 0x8064A0B4
    r3 = *(0x10c + r30); // lwz @ 0x8064A0B8
    r4 = r30 + 0xb8; // 0x8064A0BC
    if (!=) goto 0x0x8064a0d0;
    /* li r5, 1 */ // 0x8064A0C8
    /* b 0x8064a0f4 */ // 0x8064A0CC
    r3 = *(0xb0 + r4); // lwz @ 0x8064A0D0
    if (!=) goto 0x0x8064a0e4;
    /* li r5, 1 */ // 0x8064A0DC
    /* b 0x8064a0f4 */ // 0x8064A0E0
    r3 = *(0x10c + r4); // lwz @ 0x8064A0E4
    if (!=) goto 0x0x8064a0f4;
    /* li r5, 1 */ // 0x8064A0F0
    if (==) goto 0x0x8064a11c;
    r3 = r29 + 0x98; // 0x8064A0FC
    /* li r4, 1 */ // 0x8064A100
    FUN_8069F4A0(r5, r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x8064A108
    /* li r4, 2 */ // 0x8064A10C
    /* lfs f1, 0(r5) */ // 0x8064A110
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    /* b 0x8064a138 */ // 0x8064A118
    r3 = r29 + 0x98; // 0x8064A11C
    /* li r4, 1 */ // 0x8064A120
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x8064A128
    /* li r4, 0 */ // 0x8064A12C
    /* lfs f1, 0(r5) */ // 0x8064A130
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    r3 = r29 + 0x98; // 0x8064A138
    /* li r4, 2 */ // 0x8064A13C
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x8064A144
    /* li r4, 1 */ // 0x8064A148
    /* lfs f1, 0(r31) */ // 0x8064A14C
    FUN_8069F59C(r4, r4); // bl 0x8069F59C
    r3 = r29 + 0x98; // 0x8064A154
    /* li r4, 3 */ // 0x8064A158
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x8064A160
    /* li r4, 1 */ // 0x8064A164
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r4 = *(0x244 + r29); // lwz @ 0x8064A16C
    r3 = r29 + 0x174; // 0x8064A170
    FUN_806692E0(r4, r3); // bl 0x806692E0
    r0 = *(0x24 + r1); // lwz @ 0x8064A178
    r31 = *(0x1c + r1); // lwz @ 0x8064A17C
    r30 = *(0x18 + r1); // lwz @ 0x8064A180
    r29 = *(0x14 + r1); // lwz @ 0x8064A184
    return;
}