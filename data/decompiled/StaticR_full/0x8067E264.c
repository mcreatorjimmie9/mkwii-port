/* Function at 0x8067E264, size=180 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8067E264(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x8067E274
    *(8 + r1) = r30; // stw @ 0x8067E278
    r30 = r3;
    r3 = *(0 + r31); // lwz @ 0x8067E280
    r3 = *(0 + r3); // lwz @ 0x8067E284
    FUN_80686240(); // bl 0x80686240
    r0 = *(4 + r30); // lwz @ 0x8067E28C
    if (!=) goto 0x0x8067e300;
    r3 = *(0 + r31); // lwz @ 0x8067E298
    r0 = *(0x1b78 + r30); // lwz @ 0x8067E29C
    r3 = *(0x98 + r3); // lwz @ 0x8067E2A0
    *(0x3bc + r3) = r0; // stw @ 0x8067E2A4
    r0 = *(0x1b74 + r30); // lwz @ 0x8067E2A8
    if (==) goto 0x0x8067e2c8;
    if (==) goto 0x0x8067e2dc;
    if (==) goto 0x0x8067e2f0;
    /* b 0x8067e300 */ // 0x8067E2C4
    r3 = *(0 + r31); // lwz @ 0x8067E2C8
    /* li r0, 2 */ // 0x8067E2CC
    r3 = *(0x98 + r3); // lwz @ 0x8067E2D0
    *(0x3c0 + r3) = r0; // stw @ 0x8067E2D4
    /* b 0x8067e300 */ // 0x8067E2D8
    r3 = *(0 + r31); // lwz @ 0x8067E2DC
    /* li r0, 1 */ // 0x8067E2E0
    r3 = *(0x98 + r3); // lwz @ 0x8067E2E4
    *(0x3c0 + r3) = r0; // stw @ 0x8067E2E8
    /* b 0x8067e300 */ // 0x8067E2EC
    r3 = *(0 + r31); // lwz @ 0x8067E2F0
    /* li r0, 0 */ // 0x8067E2F4
    r3 = *(0x98 + r3); // lwz @ 0x8067E2F8
    *(0x3c0 + r3) = r0; // stw @ 0x8067E2FC
    r0 = *(0x14 + r1); // lwz @ 0x8067E300
    r31 = *(0xc + r1); // lwz @ 0x8067E304
    r30 = *(8 + r1); // lwz @ 0x8067E308
    return;
}