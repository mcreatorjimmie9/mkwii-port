/* Function at 0x805A2CF0, size=160 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_805A2CF0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r6, 0 */ // 0x805A2CF8
    /* li r31, 0 */ // 0x805A2D04
    *(0x18 + r1) = r30; // stw @ 0x805A2D08
    *(0x14 + r1) = r29; // stw @ 0x805A2D0C
    *(0x10 + r1) = r28; // stw @ 0x805A2D10
    r5 = *(4 + r3); // lwz @ 0x805A2D14
    r7 = *(0 + r5); // lwz @ 0x805A2D18
    r0 = *(8 + r7); // lhz @ 0x805A2D1C
    /* mtctr r0 */ // 0x805A2D20
    if (<=) goto 0x0x805a2d58;
    r0 = *(0xa + r7); // lhz @ 0x805A2D2C
    r3 = *(4 + r5); // lwz @ 0x805A2D30
    r0 = r7 + r0; // 0x805A2D34
    /* lwzx r3, r3, r6 */ // 0x805A2D38
    /* lwzux r0, r3, r0 */ // 0x805A2D3C
    if (!=) goto 0x0x805a2d50;
    r31 = r3;
    /* b 0x805a2d58 */ // 0x805A2D4C
    r6 = r6 + 4; // 0x805A2D50
    if (counter-- != 0) goto 0x0x805a2d2c;
    /* li r28, 0 */ // 0x805A2D5C
    if (==) goto 0x0x805a2dec;
    /* li r3, 0xc */ // 0x805A2D64
    FUN_805E3430(r3); // bl 0x805E3430
    r28 = r3;
    if (==) goto 0x0x805a2dec;
    /* li r0, 0 */ // 0x805A2D78
    *(0 + r3) = r0; // stw @ 0x805A2D7C
    r29 = r31 + 8; // 0x805A2D80
    *(4 + r3) = r0; // sth @ 0x805A2D84
    *(8 + r3) = r31; // stw @ 0x805A2D88
    r30 = *(4 + r31); // lhz @ 0x805A2D8C
}