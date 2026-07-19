/* Function at 0x808094E0, size=172 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

void FUN_808094E0(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* lis r6, 0 */ // 0x808094E8
    /* lis r11, 0 */ // 0x808094EC
    *(0x44 + r1) = r0; // stw @ 0x808094F0
    /* li r12, 0 */ // 0x808094F4
    *(0x3c + r1) = r31; // stw @ 0x80809500
    *(0x38 + r1) = r30; // stw @ 0x80809508
    *(0x34 + r1) = r29; // stw @ 0x8080950C
    *(0x30 + r1) = r28; // stw @ 0x80809510
    r28 = *(0 + r6); // lwzu @ 0x80809514
    /* lbzu r10, 0(r11) */ // 0x80809518
    r29 = *(4 + r6); // lwz @ 0x8080951C
    r30 = *(8 + r6); // lwz @ 0x80809520
    r31 = *(0xc + r6); // lwz @ 0x80809524
    /* li r6, 4 */ // 0x80809528
    r9 = *(1 + r11); // lbz @ 0x8080952C
    r8 = *(2 + r11); // lbz @ 0x80809530
    r0 = *(3 + r11); // lbz @ 0x80809534
    *(0x20 + r1) = r28; // stw @ 0x80809538
    *(0x24 + r1) = r29; // stw @ 0x8080953C
    *(0x28 + r1) = r30; // stw @ 0x80809540
    *(0x2c + r1) = r31; // stw @ 0x80809544
    *(0x10 + r1) = r12; // stw @ 0x80809548
    *(0x14 + r1) = r12; // stw @ 0x8080954C
    *(0x18 + r1) = r12; // stw @ 0x80809550
    *(0x1c + r1) = r12; // stw @ 0x80809554
    *(8 + r1) = r10; // stb @ 0x80809558
    *(9 + r1) = r9; // stb @ 0x8080955C
    *(0xa + r1) = r8; // stb @ 0x80809560
    *(0xb + r1) = r0; // stb @ 0x80809564
    FUN_808A1444(); // bl 0x808A1444
    r0 = *(0x44 + r1); // lwz @ 0x8080956C
    r31 = *(0x3c + r1); // lwz @ 0x80809570
    r30 = *(0x38 + r1); // lwz @ 0x80809574
    r29 = *(0x34 + r1); // lwz @ 0x80809578
    r28 = *(0x30 + r1); // lwz @ 0x8080957C
    return;
}