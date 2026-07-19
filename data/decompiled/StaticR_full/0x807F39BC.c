/* Function at 0x807F39BC, size=164 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807F39BC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 0 */ // 0x807F39C4
    *(0x1c + r1) = r31; // stw @ 0x807F39CC
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x807F39D4
    r30 = r3;
    FUN_8089F578(); // bl 0x8089F578
    /* lis r3, 0 */ // 0x807F39E0
    /* lis r0, 0x4330 */ // 0x807F39E4
    r3 = r3 + 0; // 0x807F39E8
    *(0 + r30) = r3; // stw @ 0x807F39EC
    /* lis r4, 0 */ // 0x807F39F0
    r5 = *(0 + r31); // lwz @ 0x807F39F4
    r3 = r30;
    /* lfd f1, 0(r4) */ // 0x807F39FC
    r5 = *(0x2c + r5); // lha @ 0x807F3A00
    *(0xb4 + r30) = r5; // stw @ 0x807F3A04
    r4 = *(0 + r31); // lwz @ 0x807F3A08
    *(8 + r1) = r0; // stw @ 0x807F3A0C
    *(0x10 + r1) = r0; // stw @ 0x807F3A10
    r0 = *(0x2e + r4); // lha @ 0x807F3A14
    /* xoris r0, r0, 0x8000 */ // 0x807F3A18
    *(0xc + r1) = r0; // stw @ 0x807F3A1C
    /* lfd f0, 8(r1) */ // 0x807F3A20
    /* fsubs f0, f0, f1 */ // 0x807F3A24
    /* stfs f0, 0xbc(r30) */ // 0x807F3A28
    r4 = *(0 + r31); // lwz @ 0x807F3A2C
    r0 = *(0x30 + r4); // lha @ 0x807F3A30
    /* xoris r0, r0, 0x8000 */ // 0x807F3A34
    *(0x14 + r1) = r0; // stw @ 0x807F3A38
    /* lfd f0, 0x10(r1) */ // 0x807F3A3C
    /* fsubs f0, f0, f1 */ // 0x807F3A40
    /* stfs f0, 0xc0(r30) */ // 0x807F3A44
    r31 = *(0x1c + r1); // lwz @ 0x807F3A48
    r30 = *(0x18 + r1); // lwz @ 0x807F3A4C
    r0 = *(0x24 + r1); // lwz @ 0x807F3A50
    return;
}