/* Function at 0x805F44DC, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_805F44DC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805F44EC
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805F44F4
    r30 = r3;
    if (==) goto 0x0x805f4540;
    if (==) goto 0x0x805f4530;
    if (==) goto 0x0x805f4530;
    /* li r0, 0 */ // 0x805F4508
    *(0x20 + r3) = r0; // stw @ 0x805F450C
    if (==) goto 0x0x805f4530;
    /* lis r4, 0 */ // 0x805F4514
    r4 = r4 + 0; // 0x805F4518
    *(0 + r3) = r4; // stw @ 0x805F451C
    FUN_805F4CDC(r4, r4); // bl 0x805F4CDC
    r3 = r30;
    /* li r4, 0 */ // 0x805F4528
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x805f4540;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x805F4544
    r30 = *(8 + r1); // lwz @ 0x805F4548
    r0 = *(0x14 + r1); // lwz @ 0x805F454C
    return;
}