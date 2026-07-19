/* Function at 0x807A8488, size=124 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 3 function(s) */

int FUN_807A8488(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x807A8494
    r27 = r3;
    r29 = r27;
    /* li r28, 0 */ // 0x807A84A0
    /* lis r30, 0 */ // 0x807A84A4
    /* lis r31, 0 */ // 0x807A84A8
    *(0x10 + r3) = r4; // stb @ 0x807A84AC
    /* b 0x807a84e4 */ // 0x807A84B0
    *(0x14 + r29) = r28; // stb @ 0x807A84B4
    /* clrlwi r4, r28, 0x18 */ // 0x807A84B8
    r3 = *(0 + r30); // lwz @ 0x807A84BC
    FUN_805C14C8(); // bl 0x805C14C8
    r0 = r3;
    r3 = *(0 + r31); // lwz @ 0x807A84C8
    /* extsb r4, r0 */ // 0x807A84CC
    FUN_8061D97C(); // bl 0x8061D97C
    FUN_8061E010(); // bl 0x8061E010
    *(0x18 + r29) = r3; // stw @ 0x807A84D8
    r29 = r29 + 0xc; // 0x807A84DC
    r28 = r28 + 1; // 0x807A84E0
    r0 = *(0x10 + r27); // lbz @ 0x807A84E4
    if (<) goto 0x0x807a84b4;
    r0 = *(0x24 + r1); // lwz @ 0x807A84F4
    return;
}