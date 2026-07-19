/* Function at 0x80736ED8, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80736ED8(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80736EE8
    r30 = r3;
    r31 = *(0x278 + r3); // lwz @ 0x80736EF0
    if (==) goto 0x0x80736f64;
    r3 = r31 + 0x74; // 0x80736EFC
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80736f14;
    /* li r3, 0 */ // 0x80736F0C
    /* b 0x80736f18 */ // 0x80736F10
    r3 = *(0xc + r3); // lwz @ 0x80736F14
}