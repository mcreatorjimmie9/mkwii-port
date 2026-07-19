/* Function at 0x8084C4A4, size=168 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_8084C4A4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 2 */ // 0x8084C4AC
    *(0xc + r1) = r31; // stw @ 0x8084C4B4
    *(8 + r1) = r30; // stw @ 0x8084C4B8
    r30 = r3;
    r5 = *(0 + r3); // lwz @ 0x8084C4C0
    r31 = *(0x6c + r5); // lwz @ 0x8084C4C4
    r3 = *(0x28 + r31); // lwz @ 0x8084C4C8
    FUN_805E7080(); // bl 0x805E7080
    if (==) goto 0x0x8084c4e4;
    r3 = *(0x28 + r31); // lwz @ 0x8084C4D8
    /* li r4, 2 */ // 0x8084C4DC
    FUN_805E7550(r4); // bl 0x805E7550
    r31 = *(0 + r30); // lwz @ 0x8084C4E4
    /* li r4, 0xb */ // 0x8084C4E8
    r3 = *(0x6c + r31); // lwz @ 0x8084C4EC
    r3 = *(0x28 + r3); // lwz @ 0x8084C4F0
    FUN_805E6F54(r4); // bl 0x805E6F54
    r0 = *(4 + r3); // lwz @ 0x8084C4F8
    if (==) goto 0x0x8084c524;
    r4 = *(0x6c + r31); // lwz @ 0x8084C504
    /* lis r3, 0 */ // 0x8084C508
    /* lis r5, 0 */ // 0x8084C50C
    /* lfs f1, 0(r3) */ // 0x8084C510
    r3 = *(0x28 + r4); // lwz @ 0x8084C514
    /* li r4, 0xb */ // 0x8084C518
    /* lfs f2, 0(r5) */ // 0x8084C51C
    FUN_805E70EC(r5, r4); // bl 0x805E70EC
    /* li r3, 0 */ // 0x8084C524
    /* li r0, 3 */ // 0x8084C528
    *(8 + r30) = r3; // stw @ 0x8084C52C
    *(4 + r30) = r0; // stw @ 0x8084C530
    r31 = *(0xc + r1); // lwz @ 0x8084C534
    r30 = *(8 + r1); // lwz @ 0x8084C538
    r0 = *(0x14 + r1); // lwz @ 0x8084C53C
    return;
}