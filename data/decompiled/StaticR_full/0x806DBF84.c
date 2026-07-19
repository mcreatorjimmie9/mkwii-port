/* Function at 0x806DBF84, size=148 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 8 function(s) */

int FUN_806DBF84(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x806DBF8C
    *(0xc + r1) = r31; // stw @ 0x806DBF94
    *(8 + r1) = r30; // stw @ 0x806DBF98
    r30 = r3;
    r3 = r3 + 0x1b4; // 0x806DBFA0
    FUN_806692E0(r3); // bl 0x806692E0
    r3 = r30 + 0x98; // 0x806DBFA8
    /* li r4, 0 */ // 0x806DBFAC
    FUN_8069F4A0(r3, r3, r4); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x806DBFB4
    /* li r4, 0 */ // 0x806DBFB8
    /* lfs f1, 0(r31) */ // 0x806DBFBC
    FUN_8069F59C(r4, r4); // bl 0x8069F59C
    r3 = r30 + 0x98; // 0x806DBFC4
    /* li r4, 1 */ // 0x806DBFC8
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x806DBFD0
    /* li r4, 1 */ // 0x806DBFD4
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r3 = r30 + 0x98; // 0x806DBFDC
    /* li r4, 2 */ // 0x806DBFE0
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x806DBFE8
    /* li r4, 1 */ // 0x806DBFEC
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r3 = r30;
    /* li r4, 0 */ // 0x806DBFF8
    FUN_806DD47C(r4, r3, r4); // bl 0x806DD47C
    r0 = *(0x14 + r1); // lwz @ 0x806DC000
    r31 = *(0xc + r1); // lwz @ 0x806DC004
    r30 = *(8 + r1); // lwz @ 0x806DC008
    return;
}