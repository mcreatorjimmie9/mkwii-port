/* Function at 0x805AA684, size=96 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805AA684(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r6, 0 */ // 0x805AA68C
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x805AA69C
    r30 = r4;
    /* li r4, 0 */ // 0x805AA6A4
    *(0x14 + r1) = r29; // stw @ 0x805AA6A8
    r29 = r3;
    r3 = *(0 + r6); // lwz @ 0x805AA6B0
    r3 = *(0x54 + r3); // lwz @ 0x805AA6B4
    r3 = *(0xc + r3); // lwz @ 0x805AA6B8
    r0 = *(0x28 + r3); // lwz @ 0x805AA6BC
    if (==) goto 0x0x805aa6d4;
    if (==) goto 0x0x805aa6d4;
    r4 = r3;
    r4 = *(0x18d8 + r4); // lwz @ 0x805AA6D4
    /* li r3, 0x10 */ // 0x805AA6D8
    /* li r5, 4 */ // 0x805AA6DC
    FUN_805E3430(r4, r3, r5); // bl 0x805E3430
}