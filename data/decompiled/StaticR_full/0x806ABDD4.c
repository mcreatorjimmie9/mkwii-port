/* Function at 0x806ABDD4, size=276 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_806ABDD4(int r3, int r4, int r5)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806ABDDC
    *(0xd8 + r1) = r30; // stw @ 0x806ABDE8
    *(0xd4 + r1) = r29; // stw @ 0x806ABDEC
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x806ABDF4
    r3 = *(0 + r3); // lwz @ 0x806ABDF8
    r30 = *(0x150 + r3); // lwz @ 0x806ABDFC
    if (!=) goto 0x0x806abe10;
    /* li r30, 0 */ // 0x806ABE08
    /* b 0x806abe64 */ // 0x806ABE0C
    /* lis r31, 0 */ // 0x806ABE10
    r31 = r31 + 0; // 0x806ABE14
    if (==) goto 0x0x806abe60;
    r12 = *(0 + r30); // lwz @ 0x806ABE1C
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806ABE24
    /* mtctr r12 */ // 0x806ABE28
    /* bctrl  */ // 0x806ABE2C
    /* b 0x806abe48 */ // 0x806ABE30
    if (!=) goto 0x0x806abe44;
    /* li r0, 1 */ // 0x806ABE3C
    /* b 0x806abe54 */ // 0x806ABE40
    r3 = *(0 + r3); // lwz @ 0x806ABE44
    if (!=) goto 0x0x806abe34;
    /* li r0, 0 */ // 0x806ABE50
    if (==) goto 0x0x806abe60;
    /* b 0x806abe64 */ // 0x806ABE5C
    /* li r30, 0 */ // 0x806ABE60
    r3 = r30;
    /* li r4, 0x7f2 */ // 0x806ABE68
    /* li r5, 0 */ // 0x806ABE6C
    FUN_8064D8B4(r3, r4, r5); // bl 0x8064D8B4
    FUN_80654ECC(r3, r4, r5, r3); // bl 0x80654ECC
    /* lis r3, 0 */ // 0x806ABE7C
    /* li r4, 1 */ // 0x806ABE80
    r3 = *(0 + r3); // lwz @ 0x806ABE84
    r3 = *(0x98 + r3); // lwz @ 0x806ABE88
    r3 = r3 + 0x238; // 0x806ABE8C
    FUN_8066E0EC(r3, r4, r3); // bl 0x8066E0EC
    *(0x50 + r1) = r3; // stw @ 0x806ABE94
    r3 = r30;
    /* li r4, 0x841 */ // 0x806ABEA0
    FUN_8064D8BC(r3, r5, r4); // bl 0x8064D8BC
    r0 = r29 + 0x44; // 0x806ABEA8
    *(0x820 + r30) = r0; // stw @ 0x806ABEAC
    r3 = r29;
    /* li r4, 0x52 */ // 0x806ABEB4
    r12 = *(0 + r29); // lwz @ 0x806ABEB8
    /* li r5, 0 */ // 0x806ABEBC
    r12 = *(0x24 + r12); // lwz @ 0x806ABEC0
    /* mtctr r12 */ // 0x806ABEC4
    /* bctrl  */ // 0x806ABEC8
    r0 = *(0xe4 + r1); // lwz @ 0x806ABECC
    r31 = *(0xdc + r1); // lwz @ 0x806ABED0
    r30 = *(0xd8 + r1); // lwz @ 0x806ABED4
    r29 = *(0xd4 + r1); // lwz @ 0x806ABED8
    return;
}