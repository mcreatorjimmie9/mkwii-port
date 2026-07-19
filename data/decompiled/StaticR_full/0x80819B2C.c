/* Function at 0x80819B2C, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80819B2C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x80819B38
    *(0xc + r1) = r31; // stw @ 0x80819B3C
    r31 = r3;
    if (==) goto 0x0x80819b7c;
    r0 = *(0 + r3); // lwz @ 0x80819B48
    if (==) goto 0x0x80819b6c;
    /* lis r5, 0 */ // 0x80819B54
    /* li r0, 0 */ // 0x80819B58
    r5 = *(0 + r5); // lwz @ 0x80819B5C
    *(8 + r5) = r0; // stw @ 0x80819B60
    r3 = *(0 + r3); // lwz @ 0x80819B64
    *(0 + r3) = r0; // stw @ 0x80819B68
    if (<=) goto 0x0x80819b7c;
    r3 = r31;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x80819B80
    r0 = *(0x14 + r1); // lwz @ 0x80819B84
    return;
}