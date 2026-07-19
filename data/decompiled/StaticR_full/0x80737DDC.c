/* Function at 0x80737DDC, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80737DDC(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 2 */ // 0x80737DEC
    *(8 + r1) = r30; // stw @ 0x80737DF0
    r3 = *(0x52c + r3); // lwz @ 0x80737DF4
    r30 = r3 + 8; // 0x80737DF8
    r3 = *(0 + r30); // lwz @ 0x80737DFC
    if (==) goto 0x0x80737e58;
    r3 = r3 + 0x74; // 0x80737E08
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80737e20;
    /* li r3, 0 */ // 0x80737E18
    /* b 0x80737e24 */ // 0x80737E1C
    r3 = *(0xc + r3); // lwz @ 0x80737E20
    /* li r0, 0 */ // 0x80737E28
    if (==) goto 0x0x80737e38;
    if (!=) goto 0x0x80737e3c;
}