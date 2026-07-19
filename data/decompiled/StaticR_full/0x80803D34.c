/* Function at 0x80803D34, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80803D34(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x80803D3C
    /* lis r5, 0 */ // 0x80803D40
    *(0x14 + r1) = r0; // stw @ 0x80803D44
    /* li r0, 1 */ // 0x80803D48
    /* lfs f0, 0(r4) */ // 0x80803D4C
    /* lis r4, 0 */ // 0x80803D50
    *(0xc + r1) = r31; // stw @ 0x80803D54
    /* lis r31, 0 */ // 0x80803D58
    *(8 + r1) = r30; // stw @ 0x80803D5C
    r30 = r3;
    /* stfs f0, 0x114(r3) */ // 0x80803D64
    *(0xb0 + r3) = r0; // stw @ 0x80803D68
    r3 = *(0 + r5); // lwz @ 0x80803D6C
    /* lfs f1, 0(r4) */ // 0x80803D70
    /* lfs f0, 0(r31) */ // 0x80803D74
    r3 = *(8 + r3); // lwz @ 0x80803D78
    /* fsubs f1, f1, f0 */ // 0x80803D7C
    FUN_805E3728(); // bl 0x805E3728
    /* lfs f0, 0(r31) */ // 0x80803D84
    /* fadds f0, f0, f1 */ // 0x80803D88
    /* stfs f0, 0x118(r30) */ // 0x80803D8C
    r31 = *(0xc + r1); // lwz @ 0x80803D90
    r30 = *(8 + r1); // lwz @ 0x80803D94
    r0 = *(0x14 + r1); // lwz @ 0x80803D98
    return;
}