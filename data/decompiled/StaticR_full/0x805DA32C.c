/* Function at 0x805DA32C, size=168 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805DA32C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x805DA338
    r31 = r3;
    r4 = *(0x24 + r3); // lha @ 0x805DA340
    if (<=) goto 0x0x805da364;
    r0 = r4 + -4; // 0x805DA34C
    *(0x24 + r3) = r0; // sth @ 0x805DA350
    /* extsh. r0, r0 */ // 0x805DA354
    if (>=) goto 0x0x805da364;
    /* li r0, 0 */ // 0x805DA35C
    *(0x24 + r3) = r0; // sth @ 0x805DA360
    r0 = *(0x24 + r3); // lha @ 0x805DA364
    if (>) goto 0x0x805da37c;
    /* li r0, 0 */ // 0x805DA370
    *(8 + r3) = r0; // stw @ 0x805DA374
    /* b 0x805da3c0 */ // 0x805DA378
    /* lis r4, 0 */ // 0x805DA37C
    /* lfs f2, 0x2c(r3) */ // 0x805DA380
    /* lfs f1, 0x28(r3) */ // 0x805DA384
    /* lfs f0, 0(r4) */ // 0x805DA38C
    /* stfs f1, 8(r1) */ // 0x805DA390
    /* stfs f2, 0xc(r1) */ // 0x805DA394
    /* stfs f0, 0x10(r1) */ // 0x805DA398
    r3 = *(0x20 + r3); // lwz @ 0x805DA39C
    r4 = *(0x30 + r31); // lwz @ 0x805DA3A0
    r6 = *(0x34 + r31); // lwz @ 0x805DA3A4
    FUN_805DB7A8(); // bl 0x805DB7A8
    *(0xa0 + r31) = r3; // stb @ 0x805DA3AC
    /* lfs f1, 0xc(r1) */ // 0x805DA3B0
    /* lfs f0, 8(r1) */ // 0x805DA3B4
    /* stfs f0, 0x28(r31) */ // 0x805DA3B8
    /* stfs f1, 0x2c(r31) */ // 0x805DA3BC
    r0 = *(0x24 + r1); // lwz @ 0x805DA3C0
    r31 = *(0x1c + r1); // lwz @ 0x805DA3C4
    return;
}