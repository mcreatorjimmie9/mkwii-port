/* Function at 0x807A01C0, size=188 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807A01C0(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 0 */ // 0x807A01D0
    *(8 + r1) = r30; // stw @ 0x807A01D4
    FUN_8061DC70(); // bl 0x8061DC70
    r30 = *(4 + r3); // lwz @ 0x807A01DC
    if (!=) goto 0x0x807a01f0;
    /* li r3, 0 */ // 0x807A01E8
    /* b 0x807a0264 */ // 0x807A01EC
    r12 = *(0 + r30); // lwz @ 0x807A01F0
    r3 = r30;
    r12 = *(0x10 + r12); // lwz @ 0x807A01F8
    /* mtctr r12 */ // 0x807A01FC
    /* bctrl  */ // 0x807A0200
    if (>) goto 0x0x807a0260;
    r12 = *(0 + r30); // lwz @ 0x807A020C
    r3 = r30;
    r12 = *(0x34 + r12); // lwz @ 0x807A0214
    /* mtctr r12 */ // 0x807A0218
    /* bctrl  */ // 0x807A021C
    if (==) goto 0x0x807a0244;
    if (==) goto 0x0x807a024c;
    if (==) goto 0x0x807a0254;
    if (==) goto 0x0x807a025c;
    /* b 0x807a0260 */ // 0x807A0240
    /* li r31, 2 */ // 0x807A0244
    /* b 0x807a0260 */ // 0x807A0248
    /* li r31, 4 */ // 0x807A024C
    /* b 0x807a0260 */ // 0x807A0250
    /* li r31, 8 */ // 0x807A0254
    /* b 0x807a0260 */ // 0x807A0258
    /* li r31, 0x10 */ // 0x807A025C
    r3 = r31;
    r0 = *(0x14 + r1); // lwz @ 0x807A0264
    r31 = *(0xc + r1); // lwz @ 0x807A0268
    r30 = *(8 + r1); // lwz @ 0x807A026C
    return;
}