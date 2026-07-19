/* Function at 0x80885CCC, size=100 bytes */
/* Stack frame: 144 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80885CCC(int r3, int r4, int r5)
{
    /* Stack frame: -144(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0x4330 */ // 0x80885CD4
    *(0x8c + r1) = r31; // stw @ 0x80885CDC
    r31 = r3;
    *(0x88 + r1) = r30; // stw @ 0x80885CE4
    /* lis r30, 0 */ // 0x80885CE8
    /* lfd f2, 0(r30) */ // 0x80885CEC
    r4 = *(0x30 + r3); // lwz @ 0x80885CF0
    r0 = *(0x34 + r3); // lwz @ 0x80885CF4
    *(0x6c + r1) = r0; // stw @ 0x80885CF8
    *(0x68 + r1) = r4; // stw @ 0x80885CFC
    r0 = *(0x38 + r3); // lwz @ 0x80885D00
    *(0x70 + r1) = r0; // stw @ 0x80885D04
    r0 = *(0x128 + r3); // lha @ 0x80885D08
    *(0x78 + r1) = r5; // stw @ 0x80885D0C
    /* xoris r0, r0, 0x8000 */ // 0x80885D10
    /* lfs f0, 0x134(r3) */ // 0x80885D14
    *(0x7c + r1) = r0; // stw @ 0x80885D18
    /* lfd f1, 0x78(r1) */ // 0x80885D1C
    *(0x80 + r1) = r5; // stw @ 0x80885D20
    /* fsubs f1, f1, f2 */ // 0x80885D24
    /* fmuls f1, f0, f1 */ // 0x80885D28
    FUN_805E3430(); // bl 0x805E3430
}