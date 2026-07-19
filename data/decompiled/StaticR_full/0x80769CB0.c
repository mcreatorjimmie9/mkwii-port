/* Function at 0x80769CB0, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80769CB0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0x22e */ // 0x80769CB8
    *(0x14 + r1) = r0; // stw @ 0x80769CBC
    *(0xc + r1) = r31; // stw @ 0x80769CC0
    r31 = r3;
    FUN_808A0AE8(r4); // bl 0x808A0AE8
    /* lis r4, 0 */ // 0x80769CCC
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x80769CD4
    /* li r4, 0x22d */ // 0x80769CD8
    FUN_808A0A88(r4, r3, r4); // bl 0x808A0A88
    r0 = *(0x14 + r1); // lwz @ 0x80769CE0
    r31 = *(0xc + r1); // lwz @ 0x80769CE4
    return;
}