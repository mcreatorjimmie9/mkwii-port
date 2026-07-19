/* Function at 0x80675A98, size=284 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 7 function(s) */

int FUN_80675A98(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    /* li r4, 0 */ // 0x80675AB0
    *(0x14 + r1) = r29; // stw @ 0x80675AB4
    r29 = r3;
    r3 = r3 + 0x98; // 0x80675ABC
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x80675AC4
    r31 = r3;
    if (==) goto 0x0x80675ae0;
    if (==) goto 0x0x80675af4;
    /* b 0x80675b44 */ // 0x80675ADC
    /* lis r5, 0 */ // 0x80675AE0
    /* li r4, 1 */ // 0x80675AE4
    /* lfs f1, 0(r5) */ // 0x80675AE8
    FUN_8069F59C(r5, r4); // bl 0x8069F59C
    /* b 0x80675b44 */ // 0x80675AF0
    r3 = *(0 + r3); // lwz @ 0x80675AF4
    /* slwi r0, r0, 4 */ // 0x80675AF8
    /* lwzx r3, r3, r0 */ // 0x80675AFC
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x80675B04
    /* lis r0, 0x4330 */ // 0x80675B08
    *(0xc + r1) = r4; // stw @ 0x80675B0C
    /* lis r3, 0 */ // 0x80675B10
    /* lfd f3, 0(r3) */ // 0x80675B14
    /* lis r5, 0 */ // 0x80675B18
    *(8 + r1) = r0; // stw @ 0x80675B1C
    r3 = r31;
    /* lfs f1, 0x3c(r31) */ // 0x80675B24
    /* li r4, 1 */ // 0x80675B28
    /* lfd f2, 8(r1) */ // 0x80675B2C
    /* lfs f0, 0(r5) */ // 0x80675B30
    /* fsubs f2, f2, f3 */ // 0x80675B34
    /* fdivs f1, f1, f2 */ // 0x80675B38
    /* fsubs f1, f0, f1 */ // 0x80675B3C
    FUN_8069F718(); // bl 0x8069F718
    r3 = r29 + 0x98; // 0x80675B44
    /* li r4, 1 */ // 0x80675B48
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x80675B50
    /* li r4, 0 */ // 0x80675B54
    /* lfs f1, 0(r5) */ // 0x80675B58
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    r5 = *(0x204 + r29); // lwz @ 0x80675B60
    /* li r4, 1 */ // 0x80675B64
    r3 = *(0x294 + r29); // lwz @ 0x80675B68
    /* mulli r0, r5, 0x17c */ // 0x80675B6C
    *(0x208 + r29) = r5; // stw @ 0x80675B70
    r3 = r3 + r0; // 0x80675B74
    FUN_806765E4(r4); // bl 0x806765E4
    r3 = *(0x1f4 + r29); // lwz @ 0x80675B7C
    if (==) goto 0x0x80675ba0;
    r12 = *(0 + r3); // lwz @ 0x80675B88
    r4 = r29;
    r5 = r30;
    r12 = *(8 + r12); // lwz @ 0x80675B94
    /* mtctr r12 */ // 0x80675B98
    /* bctrl  */ // 0x80675B9C
    r3 = *(0x1fc + r29); // lwz @ 0x80675BA0
    if (==) goto 0x0x80675bc8;
    r12 = *(0 + r3); // lwz @ 0x80675BAC
    r4 = r29;
}