/* Function at 0x805DB314, size=132 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 2 function(s) */

int FUN_805DB314(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x805DB320
    r26 = r3;
    FUN_805DB1C4(); // bl 0x805DB1C4
    /* li r27, 0 */ // 0x805DB32C
    /* li r29, 0 */ // 0x805DB330
    /* b 0x805db378 */ // 0x805DB334
    r3 = *(0x1c + r26); // lwz @ 0x805DB338
    /* li r30, 0 */ // 0x805DB33C
    /* lwzx r31, r3, r29 */ // 0x805DB340
    r28 = r31;
    r3 = *(0x44 + r28); // lwz @ 0x805DB348
    if (==) goto 0x0x805db360;
    r0 = *(0x24 + r31); // lha @ 0x805DB354
    /* clrlwi r4, r0, 0x18 */ // 0x805DB358
    FUN_805D9954(); // bl 0x805D9954
    r30 = r30 + 1; // 0x805DB360
    r28 = r28 + 4; // 0x805DB364
    if (<) goto 0x0x805db348;
    r29 = r29 + 4; // 0x805DB370
    r27 = r27 + 1; // 0x805DB374
    r0 = *(0x20 + r26); // lwz @ 0x805DB378
    if (<) goto 0x0x805db338;
    r0 = *(0x24 + r1); // lwz @ 0x805DB388
    return;
}