/* Function at 0x8075F988, size=116 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_8075F988(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x8075F9A0
    FUN_808A1BCC(); // bl 0x808A1BCC
    r29 = *(0x10 + r30); // lwz @ 0x8075F9A8
    r31 = r30 + 0x58; // 0x8075F9AC
    /* li r30, 0 */ // 0x8075F9B0
    r3 = *(0x14 + r29); // lwz @ 0x8075F9B4
    r3 = *(0 + r3); // lwz @ 0x8075F9B8
    if (==) goto 0x0x8075f9d0;
    r5 = r31;
    /* li r4, 0 */ // 0x8075F9C8
    FUN_805E3430(r5, r4); // bl 0x805E3430
    r30 = r30 + 1; // 0x8075F9D0
    r29 = r29 + 4; // 0x8075F9D4
    if (<) goto 0x0x8075f9b4;
    r0 = *(0x24 + r1); // lwz @ 0x8075F9E0
    r31 = *(0x1c + r1); // lwz @ 0x8075F9E4
    r30 = *(0x18 + r1); // lwz @ 0x8075F9E8
    r29 = *(0x14 + r1); // lwz @ 0x8075F9EC
    return;
}