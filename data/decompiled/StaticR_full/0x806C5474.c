/* Function at 0x806C5474, size=124 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 3 function(s) */

int FUN_806C5474(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* lis r3, 0x1062 */ // 0x806C547C
    *(0x24 + r1) = r0; // stw @ 0x806C5480
    /* li r0, 0 */ // 0x806C5484
    /* stmw r27, 0xc(r1) */ // 0x806C5488
    /* li r30, 0xa */ // 0x806C548C
    r31 = r0 * r30; // 0x806C5490
    /* lis r27, 0 */ // 0x806C5494
    r28 = r3 + 0x4dd3; // 0x806C5498
    /* lis r29, -0x8000 */ // 0x806C549C
    /* b 0x806c54cc */ // 0x806C54A0
    r3 = *(0 + r27); // lwz @ 0x806C54A4
    FUN_806F5BA0(); // bl 0x806F5BA0
    r0 = *(0xf8 + r29); // lwz @ 0x806C54AC
    /* srwi r0, r0, 2 */ // 0x806C54B0
    r0 = r28 * r0; // 0x806C54B4
    /* srwi r3, r0, 6 */ // 0x806C54B8
    r0 = r3 * r30; // 0x806C54BC
    /* mulli r4, r3, 0xa */ // 0x806C54C0
    r3 = r0 + r31; // 0x806C54C4
    FUN_805E3430(); // bl 0x805E3430
    r3 = *(0 + r27); // lwz @ 0x806C54CC
    FUN_806F58E0(); // bl 0x806F58E0
    if (==) goto 0x0x806c54a4;
    r0 = *(0x24 + r1); // lwz @ 0x806C54E0
    return;
}