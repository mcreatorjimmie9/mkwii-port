/* Function at 0x8072FF88, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8072FF88(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x8072FF98
    r30 = r3;
    r31 = *(0x280 + r3); // lwz @ 0x8072FFA0
    if (==) goto 0x0x80730014;
    r3 = r31 + 0x74; // 0x8072FFAC
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8072ffc4;
    /* li r3, 0 */ // 0x8072FFBC
    /* b 0x8072ffc8 */ // 0x8072FFC0
    r3 = *(0xc + r3); // lwz @ 0x8072FFC4
    /* li r0, 0 */ // 0x8072FFCC
    if (==) goto 0x0x8072ffdc;
    if (!=) goto 0x0x8072ffe0;
    /* li r0, 1 */ // 0x8072FFDC
}