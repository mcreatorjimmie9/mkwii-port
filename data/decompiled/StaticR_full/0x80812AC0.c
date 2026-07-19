/* Function at 0x80812AC0, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80812AC0(int r3, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r0, 1 */ // 0x80812ACC
    *(0x18 + r1) = r30; // stw @ 0x80812AD4
    *(0x14 + r1) = r29; // stw @ 0x80812AD8
    r29 = r5;
    r6 = *(0x10 + r3); // lwz @ 0x80812AE0
    r5 = *(4 + r6); // lwz @ 0x80812AE4
    if (==) goto 0x0x80812afc;
    if (==) goto 0x0x80812afc;
    /* li r0, 0 */ // 0x80812AF8
    if (==) goto 0x0x80812b0c;
    r5 = *(0 + r6); // lwz @ 0x80812B04
    /* b 0x80812b10 */ // 0x80812B08
    /* li r5, 0 */ // 0x80812B0C
    r30 = *(0xec + r5); // lwz @ 0x80812B10
    r0 = *(0xc + r3); // lwz @ 0x80812B14
    *(8 + r1) = r0; // stw @ 0x80812B1C
    FUN_805E3430(r5, r3); // bl 0x805E3430
}