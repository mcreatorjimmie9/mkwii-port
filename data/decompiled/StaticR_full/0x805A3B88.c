/* Function at 0x805A3B88, size=160 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_805A3B88(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r6, 0 */ // 0x805A3B90
    *(0x14 + r1) = r29; // stw @ 0x805A3BA0
    /* li r29, 0 */ // 0x805A3BA4
    *(0x10 + r1) = r28; // stw @ 0x805A3BA8
    r5 = *(4 + r3); // lwz @ 0x805A3BAC
    r7 = *(0 + r5); // lwz @ 0x805A3BB0
    r0 = *(8 + r7); // lhz @ 0x805A3BB4
    /* mtctr r0 */ // 0x805A3BB8
    if (<=) goto 0x0x805a3bf0;
    r0 = *(0xa + r7); // lhz @ 0x805A3BC4
    r3 = *(4 + r5); // lwz @ 0x805A3BC8
    r0 = r7 + r0; // 0x805A3BCC
    /* lwzx r3, r3, r6 */ // 0x805A3BD0
    /* lwzux r0, r3, r0 */ // 0x805A3BD4
    if (!=) goto 0x0x805a3be8;
    r29 = r3;
    /* b 0x805a3bf0 */ // 0x805A3BE4
    r6 = r6 + 4; // 0x805A3BE8
    if (counter-- != 0) goto 0x0x805a3bc4;
    /* li r31, 0 */ // 0x805A3BF4
    if (==) goto 0x0x805a3ce4;
    /* li r3, 0xc */ // 0x805A3BFC
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = r3;
    if (==) goto 0x0x805a3ce4;
    /* li r30, 0 */ // 0x805A3C10
    *(0 + r3) = r30; // stw @ 0x805A3C14
    /* lis r4, 0 */ // 0x805A3C18
    *(4 + r3) = r30; // sth @ 0x805A3C1C
    *(8 + r3) = r29; // stw @ 0x805A3C20
    r4 = *(0 + r4); // lwz @ 0x805A3C24
}