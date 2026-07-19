/* Function at 0x807D2E88, size=152 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_807D2E88(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -48(r1) */
    /* saved r27 */
    /* stmw r27, 0x1c(r1) */ // 0x807D2E94
    r27 = r3;
    r30 = *(0xc + r3); // lwz @ 0x807D2E9C
    if (==) goto 0x0x807d2f0c;
    /* lis r3, 0 */ // 0x807D2EA8
    r31 = r27;
    r29 = *(0 + r3); // lwz @ 0x807D2EB0
    /* li r28, 0 */ // 0x807D2EB4
    /* b 0x807d2f00 */ // 0x807D2EB8
    r0 = *(0x10 + r31); // lwz @ 0x807D2EBC
    r3 = r30;
    r6 = *(0x1c + r29); // lwz @ 0x807D2EC4
    /* clrlwi r4, r28, 0x10 */ // 0x807D2EC8
    /* slwi r0, r0, 2 */ // 0x807D2ECC
    /* lwzx r8, r6, r0 */ // 0x807D2ED4
    /* li r6, 0x3e8 */ // 0x807D2ED8
    r7 = *(0x30 + r8); // lwz @ 0x807D2EDC
    r0 = *(0x34 + r8); // lwz @ 0x807D2EE0
    *(0xc + r1) = r0; // stw @ 0x807D2EE4
    *(8 + r1) = r7; // stw @ 0x807D2EE8
    r0 = *(0x38 + r8); // lwz @ 0x807D2EEC
    *(0x10 + r1) = r0; // stw @ 0x807D2EF0
    FUN_8091D584(); // bl 0x8091D584
    r31 = r31 + 4; // 0x807D2EF8
    r28 = r28 + 1; // 0x807D2EFC
    r0 = *(0x1a0 + r27); // lwz @ 0x807D2F00
    if (<) goto 0x0x807d2ebc;
    r0 = *(0x34 + r1); // lwz @ 0x807D2F10
    return;
}