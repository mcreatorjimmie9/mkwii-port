/* Function at 0x805A3A6C, size=160 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_805A3A6C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r6, 0 */ // 0x805A3A74
    /* li r31, 0 */ // 0x805A3A80
    *(0x18 + r1) = r30; // stw @ 0x805A3A84
    *(0x14 + r1) = r29; // stw @ 0x805A3A88
    *(0x10 + r1) = r28; // stw @ 0x805A3A8C
    r5 = *(4 + r3); // lwz @ 0x805A3A90
    r7 = *(0 + r5); // lwz @ 0x805A3A94
    r0 = *(8 + r7); // lhz @ 0x805A3A98
    /* mtctr r0 */ // 0x805A3A9C
    if (<=) goto 0x0x805a3ad4;
    r0 = *(0xa + r7); // lhz @ 0x805A3AA8
    r3 = *(4 + r5); // lwz @ 0x805A3AAC
    r0 = r7 + r0; // 0x805A3AB0
    /* lwzx r3, r3, r6 */ // 0x805A3AB4
    /* lwzux r0, r3, r0 */ // 0x805A3AB8
    if (!=) goto 0x0x805a3acc;
    r31 = r3;
    /* b 0x805a3ad4 */ // 0x805A3AC8
    r6 = r6 + 4; // 0x805A3ACC
    if (counter-- != 0) goto 0x0x805a3aa8;
    /* li r28, 0 */ // 0x805A3AD8
    if (==) goto 0x0x805a3b64;
    /* li r3, 0xc */ // 0x805A3AE0
    FUN_805E3430(r3); // bl 0x805E3430
    r28 = r3;
    if (==) goto 0x0x805a3b64;
    /* li r0, 0 */ // 0x805A3AF4
    *(0 + r3) = r0; // stw @ 0x805A3AF8
    r29 = r31 + 8; // 0x805A3AFC
    *(4 + r3) = r0; // sth @ 0x805A3B00
    *(8 + r3) = r31; // stw @ 0x805A3B04
    r30 = *(4 + r31); // lhz @ 0x805A3B08
}