/* Function at 0x8080F1E0, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8080F1E0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8080F1EC
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x8080F1F4
    r12 = *(0xec + r12); // lwz @ 0x8080F1F8
    /* mtctr r12 */ // 0x8080F1FC
    /* bctrl  */ // 0x8080F200
    r12 = *(0 + r31); // lwz @ 0x8080F204
    r3 = r31;
    r12 = *(0xf0 + r12); // lwz @ 0x8080F20C
    /* mtctr r12 */ // 0x8080F210
    /* bctrl  */ // 0x8080F214
    r12 = *(0 + r31); // lwz @ 0x8080F218
    r3 = r31;
    r12 = *(0x38 + r12); // lwz @ 0x8080F220
    /* mtctr r12 */ // 0x8080F224
    /* bctrl  */ // 0x8080F228
    /* lis r4, 0 */ // 0x8080F22C
    r4 = r4 + 0; // 0x8080F230
    FUN_805E3430(r4, r4); // bl 0x805E3430
}