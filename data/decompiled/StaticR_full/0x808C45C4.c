/* Function at 0x808C45C4, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_808C45C4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x808C45CC
    /* li r4, 0x41 */ // 0x808C45D0
    *(0x14 + r1) = r0; // stw @ 0x808C45D4
    /* lfs f1, 0(r5) */ // 0x808C45D8
    *(0xc + r1) = r31; // stw @ 0x808C45DC
    FUN_808B40AC(r5, r4); // bl 0x808B40AC
    /* lis r4, 0 */ // 0x808C45E4
    /* li r3, 0x41 */ // 0x808C45E8
    r31 = *(0 + r4); // lwz @ 0x808C45EC
    FUN_80694E54(r4, r3); // bl 0x80694E54
    r4 = r3;
    r3 = r31;
    /* li r5, 0 */ // 0x808C45FC
    FUN_80787EB0(r4, r3, r5); // bl 0x80787EB0
    r0 = *(0x14 + r1); // lwz @ 0x808C4604
    r31 = *(0xc + r1); // lwz @ 0x808C4608
    return;
}