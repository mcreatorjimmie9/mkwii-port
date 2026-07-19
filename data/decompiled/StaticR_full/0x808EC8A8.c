/* Function at 0x808EC8A8, size=272 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_808EC8A8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x808EC8B0
    /* slwi r0, r3, 2 */ // 0x808EC8B8
    *(0xc + r1) = r31; // stw @ 0x808EC8BC
    *(8 + r1) = r30; // stw @ 0x808EC8C0
    r3 = *(0 + r4); // lwz @ 0x808EC8C4
    r3 = *(0 + r3); // lwz @ 0x808EC8C8
    r3 = r3 + r0; // 0x808EC8CC
    r30 = *(8 + r3); // lwz @ 0x808EC8D0
    if (!=) goto 0x0x808ec8e4;
    /* li r30, 0 */ // 0x808EC8DC
    /* b 0x808ec938 */ // 0x808EC8E0
    /* lis r31, 0 */ // 0x808EC8E4
    r31 = r31 + 0; // 0x808EC8E8
    if (==) goto 0x0x808ec934;
    r12 = *(0 + r30); // lwz @ 0x808EC8F0
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808EC8F8
    /* mtctr r12 */ // 0x808EC8FC
    /* bctrl  */ // 0x808EC900
    /* b 0x808ec91c */ // 0x808EC904
    if (!=) goto 0x0x808ec918;
    /* li r0, 1 */ // 0x808EC910
    /* b 0x808ec928 */ // 0x808EC914
    r3 = *(0 + r3); // lwz @ 0x808EC918
    if (!=) goto 0x0x808ec908;
    /* li r0, 0 */ // 0x808EC924
    if (==) goto 0x0x808ec934;
    /* b 0x808ec938 */ // 0x808EC930
    /* li r30, 0 */ // 0x808EC934
    if (!=) goto 0x0x808ec948;
    /* li r30, 0 */ // 0x808EC940
    /* b 0x808ec99c */ // 0x808EC944
    /* lis r31, 0 */ // 0x808EC948
    r31 = r31 + 0; // 0x808EC94C
    if (==) goto 0x0x808ec998;
    r12 = *(0 + r30); // lwz @ 0x808EC954
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808EC95C
    /* mtctr r12 */ // 0x808EC960
    /* bctrl  */ // 0x808EC964
    /* b 0x808ec980 */ // 0x808EC968
    if (!=) goto 0x0x808ec97c;
    /* li r0, 1 */ // 0x808EC974
    /* b 0x808ec98c */ // 0x808EC978
    r3 = *(0 + r3); // lwz @ 0x808EC97C
    if (!=) goto 0x0x808ec96c;
    /* li r0, 0 */ // 0x808EC988
    if (==) goto 0x0x808ec998;
    /* b 0x808ec99c */ // 0x808EC994
    /* li r30, 0 */ // 0x808EC998
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808EC9A0
    r30 = *(8 + r1); // lwz @ 0x808EC9A4
    r0 = *(0x14 + r1); // lwz @ 0x808EC9A8
    return;
}