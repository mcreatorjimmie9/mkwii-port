/* Function at 0x8070757C, size=144 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_8070757C(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x80707584
    *(0x2c + r1) = r31; // stw @ 0x8070758C
    *(0x28 + r1) = r30; // stw @ 0x80707590
    r30 = r3;
    r3 = r3 + 0x578; // 0x80707598
    FUN_80649EEC(r3); // bl 0x80649EEC
    /* lis r31, 0 */ // 0x807075A0
    /* li r0, 0 */ // 0x807075A4
    *(0xc + r1) = r0; // stb @ 0x807075A8
    r3 = *(0 + r31); // lwz @ 0x807075B0
    *(0x10 + r1) = r0; // stw @ 0x807075B4
    FUN_806F9214(r4); // bl 0x806F9214
    r0 = *(0x1c + r1); // lwz @ 0x807075BC
    *(0xacc + r30) = r0; // stw @ 0x807075C4
    r3 = *(0 + r31); // lwz @ 0x807075C8
    FUN_806F93A0(r4); // bl 0x806F93A0
    *(0xb90 + r30) = r3; // stw @ 0x807075D0
    r3 = r30 + 0x290; // 0x807075D4
    r5 = r30 + 0xa30; // 0x807075D8
    /* li r4, 0x19ca */ // 0x807075DC
    FUN_806A0A34(r3, r5, r4); // bl 0x806A0A34
    r3 = r30 + 0x404; // 0x807075E4
    r5 = r30 + 0xaf4; // 0x807075E8
    /* li r4, 0x19cb */ // 0x807075EC
    FUN_806A0A34(r4, r3, r5, r4); // bl 0x806A0A34
    r0 = *(0x34 + r1); // lwz @ 0x807075F4
    r31 = *(0x2c + r1); // lwz @ 0x807075F8
    r30 = *(0x28 + r1); // lwz @ 0x807075FC
    return;
}