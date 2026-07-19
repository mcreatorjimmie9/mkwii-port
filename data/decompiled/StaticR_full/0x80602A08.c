/* Function at 0x80602A08, size=108 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_80602A08(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x80602A1C
    r30 = r3;
    r3 = r3 + 4; // 0x80602A24
    FUN_8061E03C(r3); // bl 0x8061E03C
    r4 = r3;
    r5 = r31;
    FUN_80601794(r3, r4, r5, r3); // bl 0x80601794
    r3 = r30 + 4; // 0x80602A3C
    FUN_8061DFF8(r4, r5, r3, r3); // bl 0x8061DFF8
    /* lis r5, 0 */ // 0x80602A44
    /* lfs f1, 0(r5) */ // 0x80602A4C
    /* li r5, 0 */ // 0x80602A50
    FUN_80614630(r5, r4, r5); // bl 0x80614630
    r31 = *(0x1c + r1); // lwz @ 0x80602A58
    /* li r3, -1 */ // 0x80602A5C
    r30 = *(0x18 + r1); // lwz @ 0x80602A60
    r0 = *(0x24 + r1); // lwz @ 0x80602A64
    return;
}