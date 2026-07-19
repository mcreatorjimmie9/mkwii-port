/* Function at 0x805F6678, size=76 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805F6678(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x805F6680
    /* lis r0, 0x4330 */ // 0x805F6688
    *(0x1c + r1) = r31; // stw @ 0x805F668C
    /* li r31, 0 */ // 0x805F6690
    *(0x18 + r1) = r30; // stw @ 0x805F6694
    r30 = r3;
    r4 = *(0 + r4); // lwz @ 0x805F669C
    *(8 + r1) = r0; // stw @ 0x805F66A0
    r3 = *(0x58 + r4); // lwz @ 0x805F66A4
    *(0x10 + r1) = r0; // stw @ 0x805F66A8
    if (!=) goto 0x0x805f67b8;
    /* li r3, 0 */ // 0x805F66B4
    FUN_805E3430(r3); // bl 0x805E3430
    r0 = *(0x108 + r30); // lwz @ 0x805F66BC
}