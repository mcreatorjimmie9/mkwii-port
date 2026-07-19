/* Function at 0x805EAA0C, size=132 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805EAA0C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    r3 = *(0x1c + r3); // lwz @ 0x805EAA14
    *(0x24 + r1) = r0; // stw @ 0x805EAA18
    *(0x1c + r1) = r31; // stw @ 0x805EAA1C
    r31 = *(0x2c + r3); // lwz @ 0x805EAA20
    if (!=) goto 0x0x805eaa58;
    /* lis r3, 0 */ // 0x805EAA2C
    /* lis r5, 0 */ // 0x805EAA30
    /* lis r6, 0 */ // 0x805EAA34
    /* lis r7, 0 */ // 0x805EAA38
    r3 = r3 + 0; // 0x805EAA3C
    r5 = r5 + 0; // 0x805EAA40
    r6 = r6 + 0; // 0x805EAA44
    r7 = r7 + 0; // 0x805EAA48
    /* li r4, 0x27 */ // 0x805EAA4C
    /* crclr cr1eq */ // 0x805EAA50
    FUN_805E3430(r5, r6, r7, r4); // bl 0x805E3430
    r4 = *(0x20 + r31); // lhz @ 0x805EAA58
    /* lis r0, 0x4330 */ // 0x805EAA5C
    *(8 + r1) = r0; // stw @ 0x805EAA60
    /* lis r3, 0 */ // 0x805EAA64
    /* xoris r0, r4, 0x8000 */ // 0x805EAA68
    /* lfd f1, 0(r3) */ // 0x805EAA6C
    *(0xc + r1) = r0; // stw @ 0x805EAA70
    r31 = *(0x1c + r1); // lwz @ 0x805EAA74
    /* lfd f0, 8(r1) */ // 0x805EAA78
    r0 = *(0x24 + r1); // lwz @ 0x805EAA7C
    /* fsubs f1, f0, f1 */ // 0x805EAA80
    return;
}