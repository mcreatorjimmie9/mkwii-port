/* Function at 0x806C82A4, size=64 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r27 */
/* Calls: 2 function(s) */

int FUN_806C82A4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r27 */
    /* li r4, 0 */ // 0x806C82AC
    r3 = r3 + 0x634; // 0x806C82B0
    *(0x44 + r1) = r0; // stw @ 0x806C82B4
    /* stmw r27, 0x2c(r1) */ // 0x806C82B8
    FUN_8066E0EC(r4, r3); // bl 0x8066E0EC
    /* lis r29, 0 */ // 0x806C82C0
    r28 = r3;
    r6 = *(0 + r29); // lwz @ 0x806C82C8
    /* li r4, 0 */ // 0x806C82D0
    /* li r5, 0x16 */ // 0x806C82D4
    r6 = *(0x98 + r6); // lwz @ 0x806C82D8
    r27 = *(0x4e8 + r6); // lbz @ 0x806C82DC
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
}