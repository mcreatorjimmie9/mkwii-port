/* Function at 0x806D2D20, size=252 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_806D2D20(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r5, 0 */ // 0x806D2D28
    *(0x14 + r1) = r29; // stw @ 0x806D2D38
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x806D2D40
    r28 = r3;
    r3 = *(0 + r5); // lwz @ 0x806D2D48
    r3 = *(0 + r3); // lwz @ 0x806D2D4C
    r30 = *(0x310 + r3); // lwz @ 0x806D2D50
    if (!=) goto 0x0x806d2d64;
    /* li r30, 0 */ // 0x806D2D5C
    /* b 0x806d2db8 */ // 0x806D2D60
    /* lis r31, 0 */ // 0x806D2D64
    r31 = r31 + 0; // 0x806D2D68
    if (==) goto 0x0x806d2db4;
    r12 = *(0 + r30); // lwz @ 0x806D2D70
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806D2D78
    /* mtctr r12 */ // 0x806D2D7C
    /* bctrl  */ // 0x806D2D80
    /* b 0x806d2d9c */ // 0x806D2D84
    if (!=) goto 0x0x806d2d98;
    /* li r0, 1 */ // 0x806D2D90
    /* b 0x806d2da8 */ // 0x806D2D94
    r3 = *(0 + r3); // lwz @ 0x806D2D98
    if (!=) goto 0x0x806d2d88;
    /* li r0, 0 */ // 0x806D2DA4
    if (==) goto 0x0x806d2db4;
    /* b 0x806d2db8 */ // 0x806D2DB0
    /* li r30, 0 */ // 0x806D2DB4
    r3 = r30 + 0x290; // 0x806D2DB8
    /* li r4, 0x1ce8 */ // 0x806D2DBC
    /* li r5, 0 */ // 0x806D2DC0
    FUN_808D5844(r3, r4, r5); // bl 0x808D5844
    r3 = r30 + 0x404; // 0x806D2DC8
    /* li r4, 0x1cf0 */ // 0x806D2DCC
    /* li r5, 0 */ // 0x806D2DD0
    FUN_806A0A34(r5, r3, r4, r5); // bl 0x806A0A34
    r12 = *(0 + r28); // lwz @ 0x806D2DD8
    r3 = r28;
    r5 = r29;
    /* li r4, 0xc2 */ // 0x806D2DE4
    r12 = *(0x24 + r12); // lwz @ 0x806D2DE8
    /* mtctr r12 */ // 0x806D2DEC
    /* bctrl  */ // 0x806D2DF0
    /* li r0, 1 */ // 0x806D2DF4
    *(0x6c + r28) = r0; // stw @ 0x806D2DF8
    r31 = *(0x1c + r1); // lwz @ 0x806D2DFC
    r30 = *(0x18 + r1); // lwz @ 0x806D2E00
    r29 = *(0x14 + r1); // lwz @ 0x806D2E04
    r28 = *(0x10 + r1); // lwz @ 0x806D2E08
    r0 = *(0x24 + r1); // lwz @ 0x806D2E0C
    return;
}