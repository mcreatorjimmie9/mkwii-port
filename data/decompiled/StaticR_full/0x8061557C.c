/* Function at 0x8061557C, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8061557C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80615588
    r31 = r3;
    FUN_80605D10(); // bl 0x80605D10
    /* lis r3, 0 */ // 0x80615594
    /* li r0, 0 */ // 0x80615598
    /* lfs f0, 0(r3) */ // 0x8061559C
    /* stfs f0, 0x294(r31) */ // 0x806155A0
    /* stfs f0, 0x298(r31) */ // 0x806155A4
    /* stfs f0, 0x29c(r31) */ // 0x806155A8
    /* stfs f0, 0x2a0(r31) */ // 0x806155AC
    /* stfs f0, 0x2a4(r31) */ // 0x806155B0
    *(0x2a8 + r31) = r0; // stw @ 0x806155B4
    *(0x2ac + r31) = r0; // stb @ 0x806155B8
    *(0x2b0 + r31) = r0; // stw @ 0x806155BC
    *(0x2b4 + r31) = r0; // sth @ 0x806155C0
    *(0x2b6 + r31) = r0; // sth @ 0x806155C4
    *(0x2bc + r31) = r0; // sth @ 0x806155C8
    r31 = *(0xc + r1); // lwz @ 0x806155CC
    r0 = *(0x14 + r1); // lwz @ 0x806155D0
    return;
}