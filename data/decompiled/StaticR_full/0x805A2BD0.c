/* Function at 0x805A2BD0, size=160 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_805A2BD0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r6, 0 */ // 0x805A2BD8
    /* li r31, 0 */ // 0x805A2BE4
    *(0x18 + r1) = r30; // stw @ 0x805A2BE8
    *(0x14 + r1) = r29; // stw @ 0x805A2BEC
    *(0x10 + r1) = r28; // stw @ 0x805A2BF0
    r5 = *(4 + r3); // lwz @ 0x805A2BF4
    r7 = *(0 + r5); // lwz @ 0x805A2BF8
    r0 = *(8 + r7); // lhz @ 0x805A2BFC
    /* mtctr r0 */ // 0x805A2C00
    if (<=) goto 0x0x805a2c38;
    r0 = *(0xa + r7); // lhz @ 0x805A2C0C
    r3 = *(4 + r5); // lwz @ 0x805A2C10
    r0 = r7 + r0; // 0x805A2C14
    /* lwzx r3, r3, r6 */ // 0x805A2C18
    /* lwzux r0, r3, r0 */ // 0x805A2C1C
    if (!=) goto 0x0x805a2c30;
    r31 = r3;
    /* b 0x805a2c38 */ // 0x805A2C2C
    r6 = r6 + 4; // 0x805A2C30
    if (counter-- != 0) goto 0x0x805a2c0c;
    /* li r28, 0 */ // 0x805A2C3C
    if (==) goto 0x0x805a2ccc;
    /* li r3, 0xc */ // 0x805A2C44
    FUN_805E3430(r3); // bl 0x805E3430
    r28 = r3;
    if (==) goto 0x0x805a2ccc;
    /* li r0, 0 */ // 0x805A2C58
    *(0 + r3) = r0; // stw @ 0x805A2C5C
    r29 = r31 + 8; // 0x805A2C60
    *(4 + r3) = r0; // sth @ 0x805A2C64
    *(8 + r3) = r31; // stw @ 0x805A2C68
    r30 = *(4 + r31); // lhz @ 0x805A2C6C
}