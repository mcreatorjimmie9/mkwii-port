/* Function at 0x808129E4, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_808129E4(int r3, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r0, 1 */ // 0x808129F0
    *(0x18 + r1) = r30; // stw @ 0x808129F8
    *(0x14 + r1) = r29; // stw @ 0x808129FC
    r29 = r5;
    r6 = *(0x10 + r3); // lwz @ 0x80812A04
    r5 = *(4 + r6); // lwz @ 0x80812A08
    if (==) goto 0x0x80812a20;
    if (==) goto 0x0x80812a20;
    /* li r0, 0 */ // 0x80812A1C
    if (==) goto 0x0x80812a30;
    r5 = *(0 + r6); // lwz @ 0x80812A28
    /* b 0x80812a34 */ // 0x80812A2C
    /* li r5, 0 */ // 0x80812A30
    r30 = *(0xec + r5); // lwz @ 0x80812A34
    r0 = *(0xc + r3); // lwz @ 0x80812A38
    *(8 + r1) = r0; // stw @ 0x80812A40
    FUN_805E3430(r5, r3); // bl 0x805E3430
}