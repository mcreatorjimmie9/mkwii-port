/* Function at 0x8069A7D0, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8069A7D0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8069A7DC
    r31 = r3;
    FUN_806A0418(); // bl 0x806A0418
    /* lis r3, 0 */ // 0x8069A7E8
    /* li r5, 0 */ // 0x8069A7EC
    r3 = r3 + 0; // 0x8069A7F0
    /* li r4, 1 */ // 0x8069A7F4
    /* li r0, -1 */ // 0x8069A7F8
    *(0 + r31) = r3; // stw @ 0x8069A7FC
    r3 = r31;
    *(0x174 + r31) = r5; // stw @ 0x8069A804
    *(0x178 + r31) = r4; // stw @ 0x8069A808
    *(0x17c + r31) = r5; // stw @ 0x8069A80C
    *(0x180 + r31) = r0; // stw @ 0x8069A810
    *(0x184 + r31) = r5; // stw @ 0x8069A814
    r31 = *(0xc + r1); // lwz @ 0x8069A818
    r0 = *(0x14 + r1); // lwz @ 0x8069A81C
    return;
}