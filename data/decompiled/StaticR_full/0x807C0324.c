/* Function at 0x807C0324, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_807C0324(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x807C0330
    r30 = r3;
    r27 = r4;
    r28 = r5;
    /* li r29, 0 */ // 0x807C0340
    /* lis r31, 0 */ // 0x807C0344
    r3 = *(0x54 + r30); // lwz @ 0x807C0348
    if (==) goto 0x0x807c0398;
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* clrlwi r0, r3, 0x18 */ // 0x807C0358
    r3 = *(0 + r31); // lwz @ 0x807C035C
    /* mulli r0, r0, 0xf0 */ // 0x807C0360
    r3 = r3 + r0; // 0x807C0364
    r0 = *(0xf4 + r3); // lwz @ 0x807C0368
    if (!=) goto 0x0x807c0384;
    r3 = *(0 + r27); // lwz @ 0x807C0374
    r0 = r3 + 1; // 0x807C0378
    *(0 + r27) = r0; // stw @ 0x807C037C
    /* b 0x807c0398 */ // 0x807C0380
    if (!=) goto 0x0x807c0398;
    r3 = *(0 + r28); // lwz @ 0x807C038C
    r0 = r3 + 1; // 0x807C0390
    *(0 + r28) = r0; // stw @ 0x807C0394
    r29 = r29 + 1; // 0x807C0398
    r30 = r30 + 4; // 0x807C039C
    if (<) goto 0x0x807c0348;
    r0 = *(0x24 + r1); // lwz @ 0x807C03AC
    return;
}