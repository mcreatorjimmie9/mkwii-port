/* Function at 0x80853260, size=132 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_80853260(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x80853274
    r29 = r4;
    r0 = *(0x74 + r3); // lwz @ 0x8085327C
    if (==) goto 0x0x80853294;
    r3 = r0;
    FUN_805EADD0(r3); // bl 0x805EADD0
    /* b 0x808532c8 */ // 0x80853290
    r30 = *(0x6c + r3); // lwz @ 0x80853294
    /* li r31, 0 */ // 0x80853298
    r3 = *(0x14 + r30); // lwz @ 0x8085329C
    r3 = *(0 + r3); // lwz @ 0x808532A0
    if (==) goto 0x0x808532b8;
    r5 = r29;
    /* li r4, 0 */ // 0x808532B0
    FUN_805E3430(r5, r4); // bl 0x805E3430
    r31 = r31 + 1; // 0x808532B8
    r30 = r30 + 4; // 0x808532BC
    if (<) goto 0x0x8085329c;
    r0 = *(0x24 + r1); // lwz @ 0x808532C8
    r31 = *(0x1c + r1); // lwz @ 0x808532CC
    r30 = *(0x18 + r1); // lwz @ 0x808532D0
    r29 = *(0x14 + r1); // lwz @ 0x808532D4
    return;
}