/* Function at 0x80708D3C, size=152 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_80708D3C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80708D4C
    *(8 + r1) = r30; // stw @ 0x80708D50
    r30 = r3;
    if (==) goto 0x0x80708d7c;
    /* li r4, 0 */ // 0x80708D5C
    r3 = r3 + 0x98; // 0x80708D60
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x80708D68
    /* li r4, 4 */ // 0x80708D6C
    /* lfs f1, 0(r5) */ // 0x80708D70
    FUN_8069F59C(r3, r5, r4); // bl 0x8069F59C
    /* b 0x80708d98 */ // 0x80708D78
    /* li r4, 0 */ // 0x80708D7C
    r3 = r3 + 0x98; // 0x80708D80
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x80708D88
    /* li r4, 5 */ // 0x80708D8C
    /* lfs f1, 0(r5) */ // 0x80708D90
    FUN_8069F59C(r3, r5, r4); // bl 0x8069F59C
    r31 = r30 + 0x174; // 0x80708D98
    /* li r30, 0 */ // 0x80708D9C
    r3 = r31;
    /* li r4, 0 */ // 0x80708DA4
    FUN_80649FD0(r3, r4); // bl 0x80649FD0
    r30 = r30 + 1; // 0x80708DAC
    r31 = r31 + 0x254; // 0x80708DB0
    if (<) goto 0x0x80708da0;
    r0 = *(0x14 + r1); // lwz @ 0x80708DBC
    r31 = *(0xc + r1); // lwz @ 0x80708DC0
    r30 = *(8 + r1); // lwz @ 0x80708DC4
    return;
}