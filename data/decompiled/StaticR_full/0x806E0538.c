/* Function at 0x806E0538, size=168 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 6 function(s) */

int FUN_806E0538(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x806E0540
    /* li r5, 0 */ // 0x806E0544
    *(0x44 + r1) = r0; // stw @ 0x806E0548
    *(0x3c + r1) = r31; // stw @ 0x806E054C
    r31 = r3;
    r12 = *(0x44 + r3); // lwz @ 0x806E0554
    r12 = *(0x10 + r12); // lwz @ 0x806E0558
    /* mtctr r12 */ // 0x806E055C
    r3 = r3 + 0x44; // 0x806E0560
    /* bctrl  */ // 0x806E0564
    r3 = r31;
    r4 = r31 + 0x44; // 0x806E056C
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r31;
    /* li r4, 1 */ // 0x806E0578
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    r3 = r31;
    r5 = r31 + 0x54; // 0x806E0584
    /* li r4, 0 */ // 0x806E0588
    /* li r6, 0 */ // 0x806E058C
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r4 = r31 + 0x54; // 0x806E0598
    FUN_8064E324(r4, r6, r3, r4); // bl 0x8064E324
    /* lis r6, 0 */ // 0x806E05A0
    r6 = r6 + 0; // 0x806E05A8
    /* li r7, 0 */ // 0x806E05AC
    r4 = r6 + 0xf; // 0x806E05B0
    r5 = r6 + 0x15; // 0x806E05B4
    r6 = r6 + 0x1b; // 0x806E05B8
    FUN_8064E36C(r6, r7, r4, r5, r6); // bl 0x8064E36C
    /* li r4, -1 */ // 0x806E05C4
    FUN_8064E32C(r5, r6, r3, r4); // bl 0x8064E32C
    r0 = *(0x44 + r1); // lwz @ 0x806E05CC
    r31 = *(0x3c + r1); // lwz @ 0x806E05D0
    return;
}