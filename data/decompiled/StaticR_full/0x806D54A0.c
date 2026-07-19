/* Function at 0x806D54A0, size=176 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_806D54A0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x806D54A8
    *(0x14 + r1) = r0; // stw @ 0x806D54AC
    *(0xc + r1) = r31; // stw @ 0x806D54B0
    r31 = r3;
    r4 = *(0 + r4); // lwz @ 0x806D54B8
    r4 = *(0 + r4); // lwz @ 0x806D54BC
    r0 = *(0 + r4); // lwz @ 0x806D54C0
    if (==) goto 0x0x806d54e8;
    if (==) goto 0x0x806d54e8;
    if (==) goto 0x0x806d54f4;
    if (==) goto 0x0x806d54f4;
    /* b 0x806d54fc */ // 0x806D54E4
    /* li r0, 0 */ // 0x806D54E8
    *(0x474 + r3) = r0; // stw @ 0x806D54EC
    /* b 0x806d54fc */ // 0x806D54F0
    /* li r0, 1 */ // 0x806D54F4
    *(0x474 + r3) = r0; // stw @ 0x806D54F8
    r12 = *(0x44 + r3); // lwzu @ 0x806D54FC
    /* li r4, 0 */ // 0x806D5500
    /* li r5, 0 */ // 0x806D5504
    r12 = *(0x10 + r12); // lwz @ 0x806D5508
    /* mtctr r12 */ // 0x806D550C
    /* bctrl  */ // 0x806D5510
    r3 = r31;
    r4 = r31 + 0x44; // 0x806D5518
    FUN_80671C34(r3, r4); // bl 0x80671C34
    r3 = r31;
    /* li r4, 0 */ // 0x806D5524
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    r3 = r31;
    /* li r4, 0 */ // 0x806D5530
    /* li r5, 0 */ // 0x806D5534
    FUN_806724E0(r4, r3, r4, r5); // bl 0x806724E0
    r0 = *(0x14 + r1); // lwz @ 0x806D553C
    r31 = *(0xc + r1); // lwz @ 0x806D5540
    return;
}