/* Function at 0x808AC698, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808AC698(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r6, 0 */ // 0x808AC6A0
    r5 = r4;
    *(0x14 + r1) = r0; // stw @ 0x808AC6A8
    r6 = r6 + 0; // 0x808AC6AC
    /* lis r4, 0 */ // 0x808AC6B0
    *(0xc + r1) = r31; // stw @ 0x808AC6B4
    r31 = r3;
    *(0 + r3) = r6; // stw @ 0x808AC6BC
    /* li r6, 0 */ // 0x808AC6C0
    r3 = *(0 + r4); // lwz @ 0x808AC6C4
    /* li r4, 0 */ // 0x808AC6C8
    FUN_805CFD60(r6, r4); // bl 0x805CFD60
    r0 = *(0 + r3); // lha @ 0x808AC6D0
    r4 = r3 + 2; // 0x808AC6D4
    *(4 + r31) = r0; // sth @ 0x808AC6D8
    r3 = r31;
    /* mulli r0, r0, 0x74 */ // 0x808AC6E0
    *(8 + r31) = r4; // stw @ 0x808AC6E4
    r0 = r4 + r0; // 0x808AC6E8
    *(0xc + r31) = r0; // stw @ 0x808AC6EC
    r31 = *(0xc + r1); // lwz @ 0x808AC6F0
    r0 = *(0x14 + r1); // lwz @ 0x808AC6F4
    return;
}