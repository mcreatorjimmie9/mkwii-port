/* Function at 0x80666B70, size=172 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_80666B70(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* lis r5, 0 */ // 0x80666B78
    *(0x24 + r1) = r0; // stw @ 0x80666B80
    /* stmw r27, 0xc(r1) */ // 0x80666B84
    r4 = *(0 + r5); // lwz @ 0x80666B88
    r4 = *(0 + r4); // lwz @ 0x80666B8C
    r27 = r4 + 0x390; // 0x80666B90
    if (==) goto 0x0x80666bf4;
    r3 = *(0x14 + r3); // lwz @ 0x80666B98
    /* lis r28, 0 */ // 0x80666B9C
    /* lis r29, 0 */ // 0x80666BA0
    r31 = *(0x14 + r3); // lwz @ 0x80666BA4
    r30 = r3 + 0x14; // 0x80666BA8
    /* b 0x80666be8 */ // 0x80666BAC
    if (!=) goto 0x0x80666bcc;
    r3 = r28 + 0; // 0x80666BB8
    r5 = r29 + 0; // 0x80666BBC
    /* li r4, 0x23d */ // 0x80666BC0
    /* crclr cr1eq */ // 0x80666BC4
    FUN_805E3430(r3, r5, r4); // bl 0x805E3430
    r12 = *(-4 + r31); // lwz @ 0x80666BCC
    r3 = r31 + -4; // 0x80666BD0
    r4 = r27;
    r12 = *(0x10 + r12); // lwz @ 0x80666BD8
    /* mtctr r12 */ // 0x80666BDC
    /* bctrl  */ // 0x80666BE0
    r31 = *(0 + r31); // lwz @ 0x80666BE4
    if (!=) goto 0x0x80666bb0;
    /* b 0x80666c08 */ // 0x80666BF0
    r12 = *(4 + r3); // lwzu @ 0x80666BF4
    r4 = r27;
    r12 = *(0x30 + r12); // lwz @ 0x80666BFC
    /* mtctr r12 */ // 0x80666C00
    /* bctrl  */ // 0x80666C04
    r0 = *(0x24 + r1); // lwz @ 0x80666C0C
    return;
}