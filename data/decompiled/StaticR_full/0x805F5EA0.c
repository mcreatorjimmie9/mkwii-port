/* Function at 0x805F5EA0, size=104 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805F5EA0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x805F5EB4
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x805F5EBC
    r29 = r3;
    r3 = r6;
    FUN_805F520C(r3); // bl 0x805F520C
    r0 = *(4 + r29); // lwz @ 0x805F5ECC
    *(0 + r29) = r30; // stw @ 0x805F5ED0
    if (==) goto 0x0x805f5eec;
    r0 = *(0x34 + r29); // lhz @ 0x805F5EDC
    *(4 + r29) = r31; // stw @ 0x805F5EE0
    r0 = r0 | 1; // 0x805F5EE4
    *(0x34 + r29) = r0; // sth @ 0x805F5EE8
    r0 = *(0x24 + r1); // lwz @ 0x805F5EEC
    r31 = *(0x1c + r1); // lwz @ 0x805F5EF0
    r30 = *(0x18 + r1); // lwz @ 0x805F5EF4
    r29 = *(0x14 + r1); // lwz @ 0x805F5EF8
    return;
}