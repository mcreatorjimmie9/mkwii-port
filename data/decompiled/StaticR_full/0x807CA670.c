/* Function at 0x807CA670, size=204 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807CA670(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    r4 = r3 + 0x18; // 0x807CA684
    *(0x18 + r1) = r30; // stw @ 0x807CA688
    r30 = r3;
    FUN_807CAE38(r4); // bl 0x807CAE38
    /* lis r4, 0 */ // 0x807CA694
    /* lis r3, 0 */ // 0x807CA698
    /* lfs f1, 0(r4) */ // 0x807CA69C
    /* lfs f0, 0x54(r30) */ // 0x807CA6A0
    /* lfs f2, 0(r3) */ // 0x807CA6A4
    /* fmuls f1, f1, f0 */ // 0x807CA6A8
    /* fctiwz f0, f2 */ // 0x807CA6AC
    /* fmuls f1, f2, f1 */ // 0x807CA6B0
    /* stfd f0, 0x10(r1) */ // 0x807CA6B4
    r0 = *(0x14 + r1); // lwz @ 0x807CA6B8
    /* fctiwz f1, f1 */ // 0x807CA6BC
    /* extsb r0, r0 */ // 0x807CA6C0
    /* stfd f1, 8(r1) */ // 0x807CA6C4
    r4 = *(0xc + r1); // lwz @ 0x807CA6C8
    /* extsb r3, r4 */ // 0x807CA6CC
    if (<=) goto 0x0x807ca6e4;
    /* stfd f0, 0x10(r1) */ // 0x807CA6D8
    r4 = *(0x14 + r1); // lwz @ 0x807CA6DC
    /* b 0x807ca708 */ // 0x807CA6E0
    /* fneg f0, f2 */ // 0x807CA6E4
    /* fctiwz f0, f0 */ // 0x807CA6E8
    /* stfd f0, 0x10(r1) */ // 0x807CA6EC
    r0 = *(0x14 + r1); // lwz @ 0x807CA6F0
    /* extsb r0, r0 */ // 0x807CA6F4
    if (>=) goto 0x0x807ca708;
    /* stfd f0, 8(r1) */ // 0x807CA700
    r4 = *(0xc + r1); // lwz @ 0x807CA704
    /* lis r3, 0 */ // 0x807CA708
    /* lfs f0, 0(r3) */ // 0x807CA70C
    /* fctiwz f0, f0 */ // 0x807CA710
    /* stfd f0, 0x10(r1) */ // 0x807CA714
    r0 = *(0x14 + r1); // lwz @ 0x807CA718
    r0 = r4 + r0; // 0x807CA71C
    *(0 + r31) = r0; // stb @ 0x807CA720
    r31 = *(0x1c + r1); // lwz @ 0x807CA724
    r30 = *(0x18 + r1); // lwz @ 0x807CA728
    r0 = *(0x24 + r1); // lwz @ 0x807CA72C
    return;
}