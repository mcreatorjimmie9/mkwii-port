/* Function at 0x805EABB0, size=132 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805EABB0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    r3 = *(0x1c + r3); // lwz @ 0x805EABB8
    *(0x24 + r1) = r0; // stw @ 0x805EABBC
    *(0x1c + r1) = r31; // stw @ 0x805EABC0
    r31 = *(0x2c + r3); // lwz @ 0x805EABC4
    if (!=) goto 0x0x805eabfc;
    /* lis r3, 0 */ // 0x805EABD0
    /* lis r5, 0 */ // 0x805EABD4
    /* lis r6, 0 */ // 0x805EABD8
    /* lis r7, 0 */ // 0x805EABDC
    r3 = r3 + 0; // 0x805EABE0
    r5 = r5 + 0; // 0x805EABE4
    r6 = r6 + 0; // 0x805EABE8
    r7 = r7 + 0; // 0x805EABEC
    /* li r4, 0x27 */ // 0x805EABF0
    /* crclr cr1eq */ // 0x805EABF4
    FUN_805E3430(r5, r6, r7, r4); // bl 0x805E3430
    r4 = *(0x20 + r31); // lhz @ 0x805EABFC
    /* lis r0, 0x4330 */ // 0x805EAC00
    *(8 + r1) = r0; // stw @ 0x805EAC04
    /* lis r3, 0 */ // 0x805EAC08
    /* xoris r0, r4, 0x8000 */ // 0x805EAC0C
    /* lfd f1, 0(r3) */ // 0x805EAC10
    *(0xc + r1) = r0; // stw @ 0x805EAC14
    r31 = *(0x1c + r1); // lwz @ 0x805EAC18
    /* lfd f0, 8(r1) */ // 0x805EAC1C
    r0 = *(0x24 + r1); // lwz @ 0x805EAC20
    /* fsubs f1, f0, f1 */ // 0x805EAC24
    return;
}