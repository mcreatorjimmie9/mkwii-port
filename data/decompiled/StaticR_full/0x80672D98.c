/* Function at 0x80672D98, size=184 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 9 function(s) */

int FUN_80672D98(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x80672DA0
    *(0xc + r1) = r31; // stw @ 0x80672DA8
    *(8 + r1) = r30; // stw @ 0x80672DAC
    r30 = r3;
    r3 = r3 + 0x98; // 0x80672DB4
    FUN_8069F4A0(r3); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x80672DBC
    /* li r4, 0 */ // 0x80672DC0
    /* lfs f1, 0(r31) */ // 0x80672DC4
    FUN_8069F59C(r3, r4); // bl 0x8069F59C
    /* lis r3, 0 */ // 0x80672DCC
    r4 = *(0x174 + r30); // lwz @ 0x80672DD0
    r3 = *(0 + r3); // lwz @ 0x80672DD4
    r3 = r3 + 0x34; // 0x80672DD8
    FUN_8067FAE4(r3, r3); // bl 0x8067FAE4
    if (!=) goto 0x0x80672e04;
    r3 = r30 + 0x98; // 0x80672DE8
    /* li r4, 1 */ // 0x80672DEC
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x80672DF4
    /* li r4, 1 */ // 0x80672DF8
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    /* b 0x80672e1c */ // 0x80672E00
    r3 = r30 + 0x98; // 0x80672E04
    /* li r4, 1 */ // 0x80672E08
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x80672E10
    /* li r4, 0 */ // 0x80672E14
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r3 = r30 + 0x98; // 0x80672E1C
    /* li r4, 2 */ // 0x80672E20
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x80672E28
    /* li r4, 0 */ // 0x80672E2C
    /* lfs f1, 0(r5) */ // 0x80672E30
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    r0 = *(0x14 + r1); // lwz @ 0x80672E38
    r31 = *(0xc + r1); // lwz @ 0x80672E3C
    r30 = *(8 + r1); // lwz @ 0x80672E40
    return;
}