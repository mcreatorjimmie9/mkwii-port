/* Function at 0x808111CC, size=184 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_808111CC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x28 + r1) = r30; // stw @ 0x808111E4
    r30 = r4;
    *(0x24 + r1) = r29; // stw @ 0x808111EC
    r29 = r3;
    if (==) goto 0x0x80811200;
    if (!=) goto 0x0x80811264;
    r0 = *(0xb0 + r3); // lbz @ 0x80811200
    if (!=) goto 0x0x80811244;
    /* li r0, 1 */ // 0x8081120C
    *(0xb0 + r3) = r0; // stb @ 0x80811210
    /* lis r3, 0 */ // 0x80811214
    /* lis r4, 0 */ // 0x80811218
    /* lfs f1, 0(r3) */ // 0x8081121C
    r4 = r4 + 0; // 0x80811224
    FUN_805A443C(r3, r4, r3, r4); // bl 0x805A443C
    /* lfs f0, 8(r1) */ // 0x8081122C
    /* stfs f0, 0xb4(r29) */ // 0x80811230
    /* lfs f0, 0xc(r1) */ // 0x80811234
    /* stfs f0, 0xb8(r29) */ // 0x80811238
    /* lfs f0, 0x10(r1) */ // 0x8081123C
    /* stfs f0, 0xbc(r29) */ // 0x80811240
    r0 = *(0xcc + r29); // lbz @ 0x80811244
    if (==) goto 0x0x80811264;
    r3 = r30;
    /* li r4, 0 */ // 0x80811254
    FUN_8061DCF4(r3, r4); // bl 0x8061DCF4
    /* li r0, 0 */ // 0x8081125C
    *(0xcc + r29) = r0; // stb @ 0x80811260
    r3 = r31;
    r31 = *(0x2c + r1); // lwz @ 0x80811268
    r30 = *(0x28 + r1); // lwz @ 0x8081126C
    r29 = *(0x24 + r1); // lwz @ 0x80811270
    r0 = *(0x34 + r1); // lwz @ 0x80811274
    return;
}