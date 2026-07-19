/* Function at 0x80649EEC, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80649EEC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r6, -1 */ // 0x80649EF4
    *(0x14 + r1) = r0; // stw @ 0x80649EF8
    *(0xc + r1) = r31; // stw @ 0x80649EFC
    r31 = r3;
    r5 = r31 + 0x174; // 0x80649F04
    r3 = *(0x1b0 + r3); // lwz @ 0x80649F08
    FUN_8066A36C(r5); // bl 0x8066A36C
    r3 = r31 + 0x98; // 0x80649F10
    /* li r4, 1 */ // 0x80649F14
    FUN_8069F4A0(r5, r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x80649F1C
    /* li r4, 2 */ // 0x80649F20
    /* lfs f1, 0(r5) */ // 0x80649F24
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    r0 = *(0x14 + r1); // lwz @ 0x80649F2C
    r31 = *(0xc + r1); // lwz @ 0x80649F30
    return;
}