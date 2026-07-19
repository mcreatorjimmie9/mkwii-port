/* Function at 0x805F4B58, size=116 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805F4B58(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r3, 0 */ // 0x805F4B60
    /* li r0, 1 */ // 0x805F4B68
    *(0x1c + r1) = r31; // stw @ 0x805F4B6C
    /* lis r31, 0 */ // 0x805F4B70
    r31 = r31 + 0; // 0x805F4B74
    *(0x18 + r1) = r30; // stw @ 0x805F4B78
    *(0x14 + r1) = r29; // stw @ 0x805F4B7C
    r29 = r31 + 0x20; // 0x805F4B80
    *(0 + r3) = r0; // stw @ 0x805F4B84
    r3 = *(4 + r29); // lwz @ 0x805F4B88
    if (==) goto 0x0x805f4bac;
    r12 = *(0 + r3); // lwz @ 0x805F4B94
    r12 = *(0x14 + r12); // lwz @ 0x805F4B98
    /* mtctr r12 */ // 0x805F4B9C
    /* bctrl  */ // 0x805F4BA0
    r3 = *(4 + r29); // lwz @ 0x805F4BA4
    FUN_805F25A8(); // bl 0x805F25A8
    r30 = r31 + 0x18; // 0x805F4BAC
    /* li r0, 0 */ // 0x805F4BB0
    *(4 + r30) = r0; // stw @ 0x805F4BB4
    r29 = r31 + 0; // 0x805F4BB8
    /* b 0x805f4bd4 */ // 0x805F4BBC
    r3 = *(4 + r30); // lwz @ 0x805F4BC0
    r12 = *(0 + r3); // lwz @ 0x805F4BC4
    r12 = *(0xc + r12); // lwz @ 0x805F4BC8
}