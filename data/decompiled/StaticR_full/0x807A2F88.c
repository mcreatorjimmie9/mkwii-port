/* Function at 0x807A2F88, size=148 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_807A2F88(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x807A2F90
    /* li r0, 1 */ // 0x807A2F98
    *(0xc + r1) = r31; // stw @ 0x807A2F9C
    *(8 + r1) = r30; // stw @ 0x807A2FA0
    r30 = r3;
    *(8 + r3) = r0; // stw @ 0x807A2FA8
    /* li r0, 0 */ // 0x807A2FAC
    r4 = *(0 + r4); // lwz @ 0x807A2FB0
    r4 = *(0 + r4); // lwz @ 0x807A2FB4
    if (==) goto 0x0x807a2fc4;
    r0 = *(0 + r4); // lwz @ 0x807A2FC0
    *(0x10 + r3) = r0; // stw @ 0x807A2FC4
    r3 = r0;
    FUN_806950E4(r3); // bl 0x806950E4
    /* lis r31, 0 */ // 0x807A2FD0
    r4 = r3;
    r3 = *(0 + r31); // lwz @ 0x807A2FD8
    /* li r5, 0 */ // 0x807A2FDC
    FUN_807A9C14(r4, r5); // bl 0x807A9C14
    r3 = *(0 + r31); // lwz @ 0x807A2FE4
    FUN_807A9CE4(r4, r5); // bl 0x807A9CE4
    r12 = *(0 + r30); // lwz @ 0x807A2FEC
    r3 = r30;
    r12 = *(0x28 + r12); // lwz @ 0x807A2FF4
    /* mtctr r12 */ // 0x807A2FF8
    /* bctrl  */ // 0x807A2FFC
    r31 = *(0xc + r1); // lwz @ 0x807A3000
    /* li r3, 1 */ // 0x807A3004
    r30 = *(8 + r1); // lwz @ 0x807A3008
    r0 = *(0x14 + r1); // lwz @ 0x807A300C
    return;
}