/* Function at 0x80735E4C, size=112 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80735E4C(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    *(0x2c + r1) = r31; // stw @ 0x80735E58
    r31 = r3;
    r0 = *(0x129 + r3); // lbz @ 0x80735E60
    if (==) goto 0x0x80735ea8;
    r4 = *(0x7b0 + r31); // lwz @ 0x80735E6C
    /* lis r0, 0x4330 */ // 0x80735E70
    *(0x18 + r1) = r0; // stw @ 0x80735E74
    /* lis r3, 0 */ // 0x80735E78
    /* xoris r0, r4, 0x8000 */ // 0x80735E7C
    /* lfd f1, 0(r3) */ // 0x80735E80
    *(0x1c + r1) = r0; // stw @ 0x80735E84
    r4 = r31 + 0x7a4; // 0x80735E8C
    /* lfd f0, 0x18(r1) */ // 0x80735E90
    /* fsubs f1, f0, f1 */ // 0x80735E94
    FUN_80735EBC(r3, r4); // bl 0x80735EBC
    r3 = r31;
    FUN_80736204(r3, r4); // bl 0x80736204
    r0 = *(0x34 + r1); // lwz @ 0x80735EA8
    r31 = *(0x2c + r1); // lwz @ 0x80735EAC
    return;
}