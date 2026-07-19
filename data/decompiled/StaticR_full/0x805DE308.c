/* Function at 0x805DE308, size=188 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_805DE308(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x805DE318
    /* lfs f0, 0(r31) */ // 0x805DE31C
    *(0x28 + r1) = r30; // stw @ 0x805DE320
    *(0x24 + r1) = r29; // stw @ 0x805DE324
    /* slwi r29, r4, 2 */ // 0x805DE328
    r30 = *(0x10 + r3); // lwz @ 0x805DE32C
    r3 = *(4 + r30); // lwz @ 0x805DE330
    /* lwzx r3, r3, r29 */ // 0x805DE334
    /* lfs f1, 0x24(r3) */ // 0x805DE338
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x805DE33C
    if (<=) goto 0x0x805de428;
    r3 = r30;
    FUN_805DD290(r3); // bl 0x805DD290
    /* lis r3, 0 */ // 0x805DE34C
    r5 = *(4 + r30); // lwz @ 0x805DE350
    r3 = *(0 + r3); // lwz @ 0x805DE354
    /* li r4, 1 */ // 0x805DE358
    /* lwzx r30, r5, r29 */ // 0x805DE35C
    r3 = *(0x10 + r3); // lwz @ 0x805DE360
    FUN_805F59D8(r4); // bl 0x805F59D8
    /* lfs f0, 0x24(r30) */ // 0x805DE368
    r7 = *(0x20 + r30); // lbz @ 0x805DE370
    /* li r3, 4 */ // 0x805DE374
    /* fctiwz f0, f0 */ // 0x805DE378
    r6 = *(0x21 + r30); // lbz @ 0x805DE37C
    r5 = *(0x22 + r30); // lbz @ 0x805DE380
    /* stfd f0, 0x10(r1) */ // 0x805DE384
    r0 = *(0x14 + r1); // lwz @ 0x805DE388
    *(8 + r1) = r7; // stb @ 0x805DE38C
    *(9 + r1) = r6; // stb @ 0x805DE390
    *(0xa + r1) = r5; // stb @ 0x805DE394
    *(0xb + r1) = r0; // stb @ 0x805DE398
    r0 = *(8 + r1); // lwz @ 0x805DE39C
    *(0xc + r1) = r0; // stw @ 0x805DE3A0
    FUN_805E3430(); // bl 0x805E3430
    /* li r3, 0x80 */ // 0x805DE3A8
    /* li r4, 0 */ // 0x805DE3AC
    /* li r5, 4 */ // 0x805DE3B0
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
    /* lis r5, -0x33ff */ // 0x805DE3B8
    /* lfs f0, 0(r31) */ // 0x805DE3BC
    /* stfs f0, -0x8000(r5) */ // 0x805DE3C0
}