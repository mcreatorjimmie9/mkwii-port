/* Function at 0x8069ED2C, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8069ED2C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x8069ED3C
    r30 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x8069ED48
    r3 = r30 + 0x44; // 0x8069ED4C
    r4 = r4 + 0; // 0x8069ED50
    *(0 + r30) = r4; // stw @ 0x8069ED54
    FUN_80668134(r4, r3, r4); // bl 0x80668134
    r31 = r30 + 0x58; // 0x8069ED5C
    r3 = r31;
    FUN_806A0418(r4, r3); // bl 0x806A0418
    /* lis r4, 0 */ // 0x8069ED68
    r3 = r30;
    r4 = r4 + 0; // 0x8069ED70
    *(0 + r31) = r4; // stw @ 0x8069ED74
    r31 = *(0xc + r1); // lwz @ 0x8069ED78
    r30 = *(8 + r1); // lwz @ 0x8069ED7C
    r0 = *(0x14 + r1); // lwz @ 0x8069ED80
    return;
}