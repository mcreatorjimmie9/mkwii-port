/* Function at 0x80800674, size=156 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80800674(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r8, 0x4330 */ // 0x8080067C
    /* lis r5, 0 */ // 0x80800680
    *(0x44 + r1) = r0; // stw @ 0x80800684
    *(0x3c + r1) = r31; // stw @ 0x80800688
    /* lis r31, 0 */ // 0x8080068C
    r31 = r31 + 0; // 0x80800690
    *(0x38 + r1) = r30; // stw @ 0x80800694
    /* lfd f1, 0x90(r31) */ // 0x80800698
    *(0x34 + r1) = r29; // stw @ 0x8080069C
    r29 = r4;
    /* li r4, 7 */ // 0x808006A4
    *(0x30 + r1) = r28; // stw @ 0x808006A8
    r28 = r3;
    r0 = *(0 + r5); // lwz @ 0x808006B0
    /* lis r5, 0 */ // 0x808006B4
    r6 = *(0x104 + r3); // lwz @ 0x808006B8
    r5 = r5 + 0; // 0x808006BC
    /* mulli r0, r0, 0xc */ // 0x808006C0
    *(0x10 + r1) = r8; // stw @ 0x808006C4
    r30 = *(0x10 + r6); // lwz @ 0x808006C8
    *(0x18 + r1) = r8; // stw @ 0x808006CC
    /* lhzx r0, r5, r0 */ // 0x808006D0
    r3 = r30;
    *(0x14 + r1) = r0; // stw @ 0x808006D8
    /* li r0, 0 */ // 0x808006DC
    r6 = *(0x34 + r30); // lhz @ 0x808006E0
    /* lfd f0, 0x10(r1) */ // 0x808006E8
    r7 = r6 | 1; // 0x808006EC
    /* li r6, 0 */ // 0x808006F0
    /* fsubs f1, f0, f1 */ // 0x808006F4
    /* lfs f0, 0xc0(r31) */ // 0x808006F8
    /* stfs f1, 8(r30) */ // 0x808006FC
    *(0x34 + r30) = r7; // sth @ 0x80800700
    /* stfs f0, 0xc(r30) */ // 0x80800704
    *(8 + r1) = r0; // stw @ 0x80800708
    FUN_805E3430(); // bl 0x805E3430
}