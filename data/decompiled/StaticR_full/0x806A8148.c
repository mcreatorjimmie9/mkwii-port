/* Function at 0x806A8148, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_806A8148(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x806A8150
    /* li r5, 0 */ // 0x806A8154
    *(0x14 + r1) = r0; // stw @ 0x806A8158
    *(0xc + r1) = r31; // stw @ 0x806A815C
    r31 = r3;
    r12 = *(0x5c + r3); // lwz @ 0x806A8164
    r12 = *(0x10 + r12); // lwz @ 0x806A8168
    /* mtctr r12 */ // 0x806A816C
    r3 = r3 + 0x5c; // 0x806A8170
    /* bctrl  */ // 0x806A8174
    r3 = r31;
    r4 = r31 + 0x5c; // 0x806A817C
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r31;
    /* li r4, 0 */ // 0x806A8188
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    /* lis r3, 0 */ // 0x806A8190
    r3 = *(0 + r3); // lwz @ 0x806A8194
    r3 = *(0 + r3); // lwz @ 0x806A8198
    FUN_80685EA4(r4, r3); // bl 0x80685EA4
    r0 = *(0x14 + r1); // lwz @ 0x806A81A0
    r31 = *(0xc + r1); // lwz @ 0x806A81A4
    return;
}