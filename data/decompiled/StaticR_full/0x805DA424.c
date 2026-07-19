/* Function at 0x805DA424, size=92 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805DA424(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x805DA434
    r31 = r3;
    r3 = *(0x20 + r3); // lwz @ 0x805DA43C
    r4 = *(0x30 + r31); // lwz @ 0x805DA440
    FUN_805DB4E0(r5); // bl 0x805DB4E0
    *(0x34 + r31) = r3; // stw @ 0x805DA44C
    if (==) goto 0x0x805da46c;
    /* lfs f1, 0xc(r1) */ // 0x805DA454
    /* li r0, 3 */ // 0x805DA458
    /* lfs f0, 8(r1) */ // 0x805DA45C
    /* stfs f0, 0x28(r31) */ // 0x805DA460
    /* stfs f1, 0x2c(r31) */ // 0x805DA464
    *(8 + r31) = r0; // stw @ 0x805DA468
    r0 = *(0x24 + r1); // lwz @ 0x805DA46C
    r31 = *(0x1c + r1); // lwz @ 0x805DA470
    return;
}