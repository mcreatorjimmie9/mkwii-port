/* Function at 0x806CFDC4, size=308 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31 */
/* Calls: 11 function(s) */

int FUN_806CFDC4(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x806CFDCC
    /* li r5, 0 */ // 0x806CFDD0
    *(0x54 + r1) = r0; // stw @ 0x806CFDD4
    *(0x4c + r1) = r31; // stw @ 0x806CFDD8
    r31 = r3;
    r12 = *(0x44 + r3); // lwz @ 0x806CFDE0
    r12 = *(0x10 + r12); // lwz @ 0x806CFDE4
    /* mtctr r12 */ // 0x806CFDE8
    r3 = r3 + 0x44; // 0x806CFDEC
    /* bctrl  */ // 0x806CFDF0
    r3 = r31;
    r4 = r31 + 0x44; // 0x806CFDF8
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r31;
    /* li r4, 2 */ // 0x806CFE04
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    r3 = r31;
    r5 = r31 + 0x54; // 0x806CFE10
    /* li r4, 0 */ // 0x806CFE14
    /* li r6, 0 */ // 0x806CFE18
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r4 = r31 + 0x54; // 0x806CFE24
    FUN_8064E324(r4, r6, r3, r4); // bl 0x8064E324
    /* lis r7, 0 */ // 0x806CFE2C
    r10 = *(0 + r7); // lwzu @ 0x806CFE30
    /* lis r4, 0 */ // 0x806CFE34
    *(8 + r1) = r10; // stw @ 0x806CFE38
    r9 = *(4 + r7); // lwz @ 0x806CFE3C
    r4 = r4 + 0; // 0x806CFE40
    r8 = *(8 + r7); // lwz @ 0x806CFE44
    r0 = *(0xc + r7); // lwz @ 0x806CFE4C
    r5 = r4 + 3; // 0x806CFE50
    *(0xc + r1) = r9; // stw @ 0x806CFE54
    r6 = r4 + 0xa; // 0x806CFE58
    *(0x10 + r1) = r8; // stw @ 0x806CFE60
    *(0x14 + r1) = r0; // stw @ 0x806CFE64
    FUN_8064E36C(r6, r7); // bl 0x8064E36C
    r3 = r31 + 0xec; // 0x806CFE6C
    /* li r4, 0 */ // 0x806CFE70
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x806CFE78
    /* li r4, 0 */ // 0x806CFE7C
    /* lfs f1, 0(r5) */ // 0x806CFE80
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    /* li r4, -1 */ // 0x806CFE8C
    FUN_8064E32C(r4, r3, r4); // bl 0x8064E32C
    r3 = r31;
    r5 = r31 + 0x1c8; // 0x806CFE98
    /* li r4, 1 */ // 0x806CFE9C
    /* li r6, 0 */ // 0x806CFEA0
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r31 + 0x1c8; // 0x806CFEA8
    FUN_806C9F80(r5, r4, r6, r3); // bl 0x806C9F80
    /* lis r3, 0 */ // 0x806CFEB0
    r3 = *(0 + r3); // lwz @ 0x806CFEB4
    r3 = *(0 + r3); // lwz @ 0x806CFEB8
    r3 = *(0 + r3); // lwz @ 0x806CFEBC
    r0 = r3 + -0x49; // 0x806CFEC0
    if (>) goto 0x0x806cff20;
    /* lis r3, 0 */ // 0x806CFECC
    /* slwi r0, r0, 2 */ // 0x806CFED0
    r3 = r3 + 0; // 0x806CFED4
    /* lwzx r3, r3, r0 */ // 0x806CFED8
    /* mtctr r3 */ // 0x806CFEDC
    /* bctr  */ // 0x806CFEE0
    r3 = r31 + 0x1c8; // 0x806CFEE4
    /* li r4, 1 */ // 0x806CFEE8
    FUN_806CA040(r3, r4); // bl 0x806CA040
    /* b 0x806cff20 */ // 0x806CFEF0
    r3 = r31 + 0x1c8; // 0x806CFEF4
}