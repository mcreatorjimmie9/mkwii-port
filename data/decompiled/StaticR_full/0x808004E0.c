/* Function at 0x808004E0, size=168 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_808004E0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r6, 0 */ // 0x808004E8
    /* lis r31, 0 */ // 0x808004F4
    *(0x18 + r1) = r30; // stw @ 0x808004F8
    r30 = r5;
    /* li r5, 0 */ // 0x80800500
    *(0x14 + r1) = r29; // stw @ 0x80800504
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x8080050C
    r28 = r3;
    r3 = *(0 + r31); // lwz @ 0x80800514
    FUN_805B83E8(); // bl 0x805B83E8
    r4 = r3;
    if (!=) goto 0x0x8080055c;
    if (==) goto 0x0x80800554;
    r3 = r29;
    FUN_805B9450(r4, r3); // bl 0x805B9450
    r3 = *(0 + r31); // lwz @ 0x80800538
    r4 = r29;
    /* li r5, 0 */ // 0x80800540
    /* li r6, 0 */ // 0x80800544
    FUN_805B83E8(r4, r5, r6); // bl 0x805B83E8
    r4 = r3;
    /* b 0x8080055c */ // 0x80800550
    /* li r3, 0 */ // 0x80800554
    /* b 0x80800568 */ // 0x80800558
    r3 = r28;
    FUN_80800588(r4, r3, r3); // bl 0x80800588
    /* li r3, 1 */ // 0x80800564
    r0 = *(0x24 + r1); // lwz @ 0x80800568
    r31 = *(0x1c + r1); // lwz @ 0x8080056C
    r30 = *(0x18 + r1); // lwz @ 0x80800570
    r29 = *(0x14 + r1); // lwz @ 0x80800574
    r28 = *(0x10 + r1); // lwz @ 0x80800578
    return;
}