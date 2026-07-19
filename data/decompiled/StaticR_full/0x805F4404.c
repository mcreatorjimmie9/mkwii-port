/* Function at 0x805F4404, size=124 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_805F4404(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805F4414
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805F441C
    r30 = r3;
    if (==) goto 0x0x805f4464;
    if (==) goto 0x0x805f4454;
    /* li r0, 0 */ // 0x805F442C
    *(0x20 + r3) = r0; // stw @ 0x805F4430
    if (==) goto 0x0x805f4454;
    /* lis r4, 0 */ // 0x805F4438
    r4 = r4 + 0; // 0x805F443C
    *(0 + r3) = r4; // stw @ 0x805F4440
    FUN_805F4CDC(r4, r4); // bl 0x805F4CDC
    r3 = r30;
    /* li r4, 0 */ // 0x805F444C
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x805f4464;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x805F4468
    r30 = *(8 + r1); // lwz @ 0x805F446C
    r0 = *(0x14 + r1); // lwz @ 0x805F4470
    return;
}