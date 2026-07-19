/* Function at 0x8069DB94, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8069DB94(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x8069DB9C
    *(0x14 + r1) = r0; // stw @ 0x8069DBA0
    *(0xc + r1) = r31; // stw @ 0x8069DBA4
    r31 = r3;
    r3 = r3 + 0x260; // 0x8069DBAC
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x8069DBB4
    /* li r4, 2 */ // 0x8069DBB8
    /* lfs f1, 0(r5) */ // 0x8069DBBC
    FUN_8069F59C(r3, r5, r4); // bl 0x8069F59C
    r0 = *(0x20 + r31); // lwz @ 0x8069DBC4
    *(0x344 + r31) = r0; // stw @ 0x8069DBC8
    r31 = *(0xc + r1); // lwz @ 0x8069DBCC
    r0 = *(0x14 + r1); // lwz @ 0x8069DBD0
    return;
}