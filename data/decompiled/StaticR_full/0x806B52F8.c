/* Function at 0x806B52F8, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806B52F8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x806B5300
    *(0x14 + r1) = r0; // stw @ 0x806B5304
    /* li r0, 0 */ // 0x806B5308
    *(0xc + r1) = r31; // stw @ 0x806B530C
    r31 = r3;
    *(0x19c + r3) = r0; // stw @ 0x806B5314
    r3 = r3 + 0x238; // 0x806B5318
    FUN_8069F4A0(r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x806B5320
    r4 = *(0x19c + r31); // lwz @ 0x806B5324
    /* lfs f1, 0(r5) */ // 0x806B5328
    FUN_8069F59C(r3, r5); // bl 0x8069F59C
    r0 = *(0x14 + r1); // lwz @ 0x806B5330
    r31 = *(0xc + r1); // lwz @ 0x806B5334
    return;
}