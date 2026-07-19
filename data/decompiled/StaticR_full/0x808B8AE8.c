/* Function at 0x808B8AE8, size=208 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_808B8AE8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x808B8AF0
    *(0xc + r1) = r31; // stw @ 0x808B8AF8
    *(8 + r1) = r30; // stw @ 0x808B8AFC
    r30 = r3;
    r5 = *(0 + r4); // lwz @ 0x808B8B04
    r0 = *(0x36 + r5); // lha @ 0x808B8B08
    if (<) goto 0x0x808b8b30;
    /* lis r3, 1 */ // 0x808B8B14
    /* clrlwi r4, r0, 0x18 */ // 0x808B8B18
    r0 = r3 + -0x6c10; // 0x808B8B1C
    r0 = r0 * r4; // 0x808B8B20
    r3 = r5 + r0; // 0x808B8B24
    r3 = r3 + 0x38; // 0x808B8B28
    /* b 0x808b8b34 */ // 0x808B8B2C
    /* li r3, 0 */ // 0x808B8B30
    /* addis r3, r3, 1 */ // 0x808B8B34
    /* li r4, 0x34 */ // 0x808B8B38
    r3 = r3 + -0x7008; // 0x808B8B3C
    FUN_805D84B0(r3, r4, r3); // bl 0x805D84B0
    if (==) goto 0x0x808b8b58;
    /* li r0, 4 */ // 0x808B8B4C
    *(0x4c + r30) = r0; // stw @ 0x808B8B50
    /* b 0x808b8b60 */ // 0x808B8B54
    /* li r0, 3 */ // 0x808B8B58
    *(0x4c + r30) = r0; // stw @ 0x808B8B5C
    /* li r31, 1 */ // 0x808B8B60
    *(0x3dc + r30) = r31; // stb @ 0x808B8B64
    r3 = r30;
    FUN_808B2D44(r3); // bl 0x808B2D44
    /* lis r3, 0 */ // 0x808B8B70
    r3 = *(0 + r3); // lwz @ 0x808B8B74
    r3 = *(0 + r3); // lwz @ 0x808B8B78
    FUN_80685E54(r3, r3); // bl 0x80685E54
    *(0x6c4 + r30) = r31; // stb @ 0x808B8B80
    r3 = r30;
    r12 = *(0 + r30); // lwz @ 0x808B8B88
    r12 = *(0x70 + r12); // lwz @ 0x808B8B8C
    /* mtctr r12 */ // 0x808B8B90
    /* bctrl  */ // 0x808B8B94
    /* li r4, 1 */ // 0x808B8B98
    FUN_8066A380(r4); // bl 0x8066A380
    r0 = *(0x14 + r1); // lwz @ 0x808B8BA0
    r31 = *(0xc + r1); // lwz @ 0x808B8BA4
    r30 = *(8 + r1); // lwz @ 0x808B8BA8
    return;
}