/* Function at 0x805F2BB0, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_805F2BB0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* mulli r0, r5, 0xc */ // 0x805F2BBC
    /* stmw r26, 8(r1) */ // 0x805F2BC0
    r26 = r3;
    r27 = r4;
    /* li r28, 0 */ // 0x805F2BCC
    r31 = r26;
    r30 = r27;
    r6 = *(0x3c + r3); // lwz @ 0x805F2BD8
    r3 = *(0 + r6); // lwz @ 0x805F2BDC
    r29 = r3 + r0; // 0x805F2BE0
    r3 = *(0x30 + r26); // lwz @ 0x805F2BE4
    r4 = *(0x28 + r31); // lwz @ 0x805F2BE8
    r12 = *(0xb4 + r3); // lwz @ 0x805F2BEC
    r12 = *(0x18 + r12); // lwz @ 0x805F2BF0
    /* mtctr r12 */ // 0x805F2BF4
    /* bctrl  */ // 0x805F2BF8
    r4 = *(0x14 + r30); // lwz @ 0x805F2BFC
    r3 = *(0x30 + r26); // lwz @ 0x805F2C00
    r4 = *(0 + r4); // lwz @ 0x805F2C04
    r5 = *(0 + r29); // lbz @ 0x805F2C08
    r6 = *(2 + r29); // lbz @ 0x805F2C0C
    FUN_805E3430(); // bl 0x805E3430
}