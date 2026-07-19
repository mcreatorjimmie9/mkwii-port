/* Function at 0x806AFFB4, size=196 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_806AFFB4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x806AFFBC
    *(0x14 + r1) = r0; // stw @ 0x806AFFC0
    *(0xc + r1) = r31; // stw @ 0x806AFFC4
    r31 = r3;
    r4 = *(0 + r4); // lwz @ 0x806AFFCC
    r4 = *(0 + r4); // lwz @ 0x806AFFD0
    r4 = *(0 + r4); // lwz @ 0x806AFFD4
    r0 = r4 + -0x68; // 0x806AFFD8
    if (>) goto 0x0x806b0030;
    /* lis r4, 0 */ // 0x806AFFE4
    /* slwi r0, r0, 2 */ // 0x806AFFE8
    r4 = r4 + 0; // 0x806AFFEC
    /* lwzx r4, r4, r0 */ // 0x806AFFF0
    /* mtctr r4 */ // 0x806AFFF4
    /* bctr  */ // 0x806AFFF8
    r12 = *(0x44 + r3); // lwzu @ 0x806AFFFC
    /* li r4, 1 */ // 0x806B0000
    /* li r5, 0 */ // 0x806B0004
    r12 = *(0x10 + r12); // lwz @ 0x806B0008
    /* mtctr r12 */ // 0x806B000C
    /* bctrl  */ // 0x806B0010
    /* b 0x806b0030 */ // 0x806B0014
    r12 = *(0x44 + r3); // lwzu @ 0x806B0018
    /* li r4, 1 */ // 0x806B001C
    /* li r5, 1 */ // 0x806B0020
    r12 = *(0x10 + r12); // lwz @ 0x806B0024
    /* mtctr r12 */ // 0x806B0028
    /* bctrl  */ // 0x806B002C
    r3 = r31;
    r4 = r31 + 0x44; // 0x806B0034
    FUN_80671C34(r3, r4); // bl 0x80671C34
    r3 = r31;
    /* li r4, 1 */ // 0x806B0040
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    r3 = r31;
    r5 = r31 + 0x54; // 0x806B004C
    /* li r4, 0 */ // 0x806B0050
    /* li r6, 0 */ // 0x806B0054
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    /* lis r6, 0 */ // 0x806B005C
    r3 = r31 + 0x54; // 0x806B0060
    r6 = r6 + 0; // 0x806B0064
    r4 = r6 + 0x207; // 0x806B0068
    r5 = r6 + 0x20f; // 0x806B006C
    r6 = r6 + 0x223; // 0x806B0070
    FUN_8066D150(r3, r6, r4, r5, r6); // bl 0x8066D150
}