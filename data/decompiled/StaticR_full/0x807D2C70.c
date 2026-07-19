/* Function at 0x807D2C70, size=152 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807D2C70(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x807D2C78
    /* li r8, 0 */ // 0x807D2C7C
    *(0x14 + r1) = r0; // stw @ 0x807D2C80
    /* li r9, 0 */ // 0x807D2C84
    /* li r5, 0 */ // 0x807D2C88
    *(0xc + r1) = r31; // stw @ 0x807D2C8C
    *(8 + r1) = r30; // stw @ 0x807D2C90
    r30 = r3;
    r6 = r30;
    r7 = *(0 + r4); // lwz @ 0x807D2C9C
    r0 = *(0x18 + r7); // lhz @ 0x807D2CA0
    /* mtctr r0 */ // 0x807D2CA4
    if (<=) goto 0x0x807d2cdc;
    r4 = *(0x1c + r7); // lwz @ 0x807D2CB0
    /* lwzx r4, r4, r5 */ // 0x807D2CB4
    r0 = *(4 + r4); // lwz @ 0x807D2CB8
    if (!=) goto 0x0x807d2cd0;
    *(0x10 + r6) = r9; // stw @ 0x807D2CC4
    r6 = r6 + 4; // 0x807D2CC8
    r8 = r8 + 1; // 0x807D2CCC
    r5 = r5 + 4; // 0x807D2CD0
    r9 = r9 + 1; // 0x807D2CD4
    if (counter-- != 0) goto 0x0x807d2cb0;
    *(0x1a0 + r3) = r8; // stw @ 0x807D2CE0
    if (<=) goto 0x0x807d2d30;
    /* li r3, 0x44 */ // 0x807D2CE8
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = r3;
    if (==) goto 0x0x807d2d2c;
    /* lis r4, 0 */ // 0x807D2CFC
    r5 = *(0x1a0 + r30); // lwz @ 0x807D2D00
    /* lis r6, 0 */ // 0x807D2D04
}