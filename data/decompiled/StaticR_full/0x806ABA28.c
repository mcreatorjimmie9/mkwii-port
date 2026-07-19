/* Function at 0x806ABA28, size=256 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 9 function(s) */

int FUN_806ABA28(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x806ABA30
    /* li r5, 0 */ // 0x806ABA34
    *(0x14 + r1) = r0; // stw @ 0x806ABA38
    *(0xc + r1) = r31; // stw @ 0x806ABA3C
    *(8 + r1) = r30; // stw @ 0x806ABA40
    r30 = r3;
    r12 = *(0x4a0 + r3); // lwz @ 0x806ABA48
    r12 = *(0x10 + r12); // lwz @ 0x806ABA4C
    /* mtctr r12 */ // 0x806ABA50
    r3 = r3 + 0x4a0; // 0x806ABA54
    /* bctrl  */ // 0x806ABA58
    r3 = r30;
    r4 = r30 + 0x4a0; // 0x806ABA60
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r30;
    /* li r4, 3 */ // 0x806ABA6C
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    r3 = r30;
    r5 = r30 + 0x44; // 0x806ABA78
    /* li r4, 0 */ // 0x806ABA7C
    /* li r6, 0 */ // 0x806ABA80
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    /* lis r31, 0 */ // 0x806ABA88
    r3 = r30 + 0x44; // 0x806ABA8C
    r4 = r31 + 0; // 0x806ABA90
    r5 = r4 + 0xf; // 0x806ABA94
    r6 = r4 + 0x1a; // 0x806ABA98
    FUN_8066D484(r3, r4, r5, r6); // bl 0x8066D484
    r3 = r30;
    r5 = r30 + 0x1b8; // 0x806ABAA4
    /* li r4, 1 */ // 0x806ABAA8
    /* li r6, 0 */ // 0x806ABAAC
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r31 = r31 + 0; // 0x806ABAB4
    r3 = r30 + 0x1b8; // 0x806ABAB8
    r4 = r31 + 0x25; // 0x806ABABC
    r5 = r31 + 0x34; // 0x806ABAC0
    r6 = r31 + 0x42; // 0x806ABAC4
    FUN_8066CF50(r3, r4, r5, r6); // bl 0x8066CF50
    r3 = r30;
    r5 = r30 + 0x32c; // 0x806ABAD0
    /* li r4, 2 */ // 0x806ABAD4
    /* li r6, 0 */ // 0x806ABAD8
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0x32c; // 0x806ABAE0
    r4 = r31 + 0x55; // 0x806ABAE4
    r5 = r31 + 0x60; // 0x806ABAE8
    r6 = r31 + 0x69; // 0x806ABAEC
    FUN_8066D30C(r3, r4, r5, r6); // bl 0x8066D30C
    /* lis r4, 0 */ // 0x806ABAF4
    r3 = r30 + 0x1b8; // 0x806ABAF8
    /* lfs f0, 0(r4) */ // 0x806ABAFC
    /* li r4, 0x10cd */ // 0x806ABB00
    /* stfs f0, 0x3a8(r30) */ // 0x806ABB04
    /* li r5, 0 */ // 0x806ABB08
    FUN_806A0A34(r3, r4, r5); // bl 0x806A0A34
    r0 = *(0x14 + r1); // lwz @ 0x806ABB10
    r31 = *(0xc + r1); // lwz @ 0x806ABB14
    r30 = *(8 + r1); // lwz @ 0x806ABB18
    return;
}