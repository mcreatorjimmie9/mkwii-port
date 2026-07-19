/* Function at 0x8088C2A8, size=196 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8088C2A8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x8088C2BC
    r30 = r4;
    FUN_8088BF74(); // bl 0x8088BF74
    /* lis r3, 0 */ // 0x8088C2C8
    /* li r0, 0 */ // 0x8088C2CC
    r3 = r3 + 0; // 0x8088C2D0
    *(0 + r31) = r3; // stw @ 0x8088C2D4
    r3 = *(0 + r30); // lwz @ 0x8088C2D8
    r3 = *(0x30 + r3); // lha @ 0x8088C2DC
    *(0x14a + r31) = r3; // sth @ 0x8088C2E0
    *(0x14c + r31) = r0; // sth @ 0x8088C2E4
    r3 = *(0 + r30); // lwz @ 0x8088C2E8
    r0 = *(0x2e + r3); // lha @ 0x8088C2EC
    *(0x14e + r31) = r0; // sth @ 0x8088C2F0
    r3 = *(0 + r30); // lwz @ 0x8088C2F8
    r0 = *(0x32 + r3); // lha @ 0x8088C2FC
    *(0x150 + r31) = r0; // sth @ 0x8088C300
    r3 = *(0 + r30); // lwz @ 0x8088C304
    r0 = *(0x2c + r3); // lha @ 0x8088C308
    *(0x152 + r31) = r0; // sth @ 0x8088C30C
    if (>=) goto 0x0x8088c31c;
    /* li r0, 2 */ // 0x8088C314
    *(0x14e + r31) = r0; // sth @ 0x8088C318
    r3 = *(0x14e + r31); // lha @ 0x8088C31C
    /* lis r0, 0x4330 */ // 0x8088C320
    /* lis r5, 0 */ // 0x8088C324
    /* lis r4, 0 */ // 0x8088C328
    /* xoris r3, r3, 0x8000 */ // 0x8088C32C
    *(0xc + r1) = r3; // stw @ 0x8088C330
    /* lfd f2, 0(r5) */ // 0x8088C334
    r3 = r31;
    *(8 + r1) = r0; // stw @ 0x8088C33C
    /* lfs f0, 0(r4) */ // 0x8088C340
    /* lfd f1, 8(r1) */ // 0x8088C344
    /* fsubs f1, f1, f2 */ // 0x8088C348
    /* fdivs f0, f0, f1 */ // 0x8088C34C
    /* stfs f0, 0x158(r31) */ // 0x8088C350
    r31 = *(0x1c + r1); // lwz @ 0x8088C354
    r30 = *(0x18 + r1); // lwz @ 0x8088C358
    r0 = *(0x24 + r1); // lwz @ 0x8088C35C
    return;
}