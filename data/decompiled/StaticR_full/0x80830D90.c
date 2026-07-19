/* Function at 0x80830D90, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80830D90(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80830D9C
    r31 = r3;
    FUN_80828B30(); // bl 0x80828B30
    r4 = *(0x9c + r31); // lwz @ 0x80830DA8
    /* lis r3, 0 */ // 0x80830DAC
    /* lis r5, 0 */ // 0x80830DB0
    /* lfs f1, 0(r3) */ // 0x80830DB4
    r3 = *(0x28 + r4); // lwz @ 0x80830DB8
    /* li r4, 4 */ // 0x80830DBC
    /* lfs f2, 0(r5) */ // 0x80830DC0
    FUN_805E70EC(r5, r4); // bl 0x805E70EC
    r0 = *(0x14 + r1); // lwz @ 0x80830DC8
    r31 = *(0xc + r1); // lwz @ 0x80830DCC
    return;
}