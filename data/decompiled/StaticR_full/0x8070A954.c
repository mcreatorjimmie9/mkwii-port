/* Function at 0x8070A954, size=260 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_8070A954(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x8070A95C
    /* li r0, 0 */ // 0x8070A964
    *(0x1c + r1) = r31; // stw @ 0x8070A968
    *(0x18 + r1) = r30; // stw @ 0x8070A96C
    *(0x14 + r1) = r29; // stw @ 0x8070A970
    r29 = r3;
    *(0x54 + r3) = r0; // stw @ 0x8070A978
    r3 = *(0 + r4); // lwz @ 0x8070A97C
    r3 = *(0 + r3); // lwz @ 0x8070A980
    r30 = *(0x150 + r3); // lwz @ 0x8070A984
    if (!=) goto 0x0x8070a998;
    /* li r30, 0 */ // 0x8070A990
    /* b 0x8070a9ec */ // 0x8070A994
    /* lis r31, 0 */ // 0x8070A998
    r31 = r31 + 0; // 0x8070A99C
    if (==) goto 0x0x8070a9e8;
    r12 = *(0 + r30); // lwz @ 0x8070A9A4
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x8070A9AC
    /* mtctr r12 */ // 0x8070A9B0
    /* bctrl  */ // 0x8070A9B4
    /* b 0x8070a9d0 */ // 0x8070A9B8
    if (!=) goto 0x0x8070a9cc;
    /* li r0, 1 */ // 0x8070A9C4
    /* b 0x8070a9dc */ // 0x8070A9C8
    r3 = *(0 + r3); // lwz @ 0x8070A9CC
    if (!=) goto 0x0x8070a9bc;
    /* li r0, 0 */ // 0x8070A9D8
    if (==) goto 0x0x8070a9e8;
    /* b 0x8070a9ec */ // 0x8070A9E4
    /* li r30, 0 */ // 0x8070A9E8
    r12 = *(0 + r30); // lwz @ 0x8070A9EC
    r3 = r30;
    r12 = *(0x64 + r12); // lwz @ 0x8070A9F4
    /* mtctr r12 */ // 0x8070A9F8
    /* bctrl  */ // 0x8070A9FC
    r3 = r30;
    /* li r4, 0x1af4 */ // 0x8070AA04
    /* li r5, 0 */ // 0x8070AA08
    FUN_8064D8B4(r3, r4, r5); // bl 0x8064D8B4
    r3 = r30;
    /* li r4, 0x1af5 */ // 0x8070AA14
    /* li r5, 0 */ // 0x8070AA18
    FUN_8064D8BC(r5, r3, r4, r5); // bl 0x8064D8BC
    r12 = *(0 + r29); // lwz @ 0x8070AA20
    r3 = r29;
    /* li r4, 0x52 */ // 0x8070AA28
    /* li r5, 0 */ // 0x8070AA2C
    r12 = *(0x24 + r12); // lwz @ 0x8070AA30
    /* mtctr r12 */ // 0x8070AA34
    /* bctrl  */ // 0x8070AA38
    r0 = *(0x24 + r1); // lwz @ 0x8070AA3C
    r31 = *(0x1c + r1); // lwz @ 0x8070AA40
    r30 = *(0x18 + r1); // lwz @ 0x8070AA44
    r29 = *(0x14 + r1); // lwz @ 0x8070AA48
    return;
}