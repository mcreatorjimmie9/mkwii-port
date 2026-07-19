/* Function at 0x807B0C94, size=108 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807B0C94(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x807B0CA4
    *(0x18 + r1) = r30; // stw @ 0x807B0CA8
    *(0x14 + r1) = r29; // stw @ 0x807B0CAC
    r29 = r3;
    r30 = *(4 + r3); // lwz @ 0x807B0CB4
    r3 = *(0x14 + r30); // lwz @ 0x807B0CB8
    r3 = *(0 + r3); // lwz @ 0x807B0CBC
    if (==) goto 0x0x807b0cd4;
    r5 = r29 + 0x2c; // 0x807B0CC8
    /* li r4, 0 */ // 0x807B0CCC
    FUN_805E3430(r5, r4); // bl 0x805E3430
    r31 = r31 + 1; // 0x807B0CD4
    r30 = r30 + 4; // 0x807B0CD8
    if (<) goto 0x0x807b0cb8;
    r0 = *(0x24 + r1); // lwz @ 0x807B0CE4
    r31 = *(0x1c + r1); // lwz @ 0x807B0CE8
    r30 = *(0x18 + r1); // lwz @ 0x807B0CEC
    r29 = *(0x14 + r1); // lwz @ 0x807B0CF0
    return;
}