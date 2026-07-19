/* Function at 0x805A2E10, size=160 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_805A2E10(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r6, 0 */ // 0x805A2E18
    /* li r31, 0 */ // 0x805A2E24
    *(0x18 + r1) = r30; // stw @ 0x805A2E28
    *(0x14 + r1) = r29; // stw @ 0x805A2E2C
    *(0x10 + r1) = r28; // stw @ 0x805A2E30
    r5 = *(4 + r3); // lwz @ 0x805A2E34
    r7 = *(0 + r5); // lwz @ 0x805A2E38
    r0 = *(8 + r7); // lhz @ 0x805A2E3C
    /* mtctr r0 */ // 0x805A2E40
    if (<=) goto 0x0x805a2e78;
    r0 = *(0xa + r7); // lhz @ 0x805A2E4C
    r3 = *(4 + r5); // lwz @ 0x805A2E50
    r0 = r7 + r0; // 0x805A2E54
    /* lwzx r3, r3, r6 */ // 0x805A2E58
    /* lwzux r0, r3, r0 */ // 0x805A2E5C
    if (!=) goto 0x0x805a2e70;
    r31 = r3;
    /* b 0x805a2e78 */ // 0x805A2E6C
    r6 = r6 + 4; // 0x805A2E70
    if (counter-- != 0) goto 0x0x805a2e4c;
    /* li r28, 0 */ // 0x805A2E7C
    if (==) goto 0x0x805a2f0c;
    /* li r3, 0xc */ // 0x805A2E84
    FUN_805E3430(r3); // bl 0x805E3430
    r28 = r3;
    if (==) goto 0x0x805a2f0c;
    /* li r0, 0 */ // 0x805A2E98
    *(0 + r3) = r0; // stw @ 0x805A2E9C
    r29 = r31 + 8; // 0x805A2EA0
    *(4 + r3) = r0; // sth @ 0x805A2EA4
    *(8 + r3) = r31; // stw @ 0x805A2EA8
    r30 = *(4 + r31); // lhz @ 0x805A2EAC
}