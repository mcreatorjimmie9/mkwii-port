/* Function at 0x807D330C, size=288 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_807D330C(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x18 + r1) = r30; // stw @ 0x807D331C
    r3 = *(0x1a8 + r3); // lwz @ 0x807D3320
    if (==) goto 0x0x807d3414;
    /* lis r5, 0 */ // 0x807D332C
    /* lis r4, 0 */ // 0x807D3330
    r31 = *(0 + r5); // lwz @ 0x807D3334
    r4 = *(0 + r4); // lwz @ 0x807D3338
    r5 = *(0 + r31); // lbz @ 0x807D333C
    r4 = *(0x20 + r4); // lwz @ 0x807D3340
    r0 = r4 u/ r5; // 0x807D3344
    r0 = r0 * r5; // 0x807D3348
    /* subf r30, r0, r4 */ // 0x807D334C
    /* clrlwi r0, r30, 0x18 */ // 0x807D3350
    if (>=) goto 0x0x807d336c;
    /* mulli r0, r0, 0x1c */ // 0x807D335C
    r4 = r31 + r0; // 0x807D3360
    r8 = *(0xc + r4); // lwz @ 0x807D3364
    /* b 0x807d3370 */ // 0x807D3368
    /* li r8, 0 */ // 0x807D336C
    r6 = *(0x168 + r8); // lwz @ 0x807D3370
    /* li r5, 1 */ // 0x807D3374
    r4 = *(0x160 + r8); // lwz @ 0x807D3378
    /* slwi r0, r6, 4 */ // 0x807D337C
    /* lwzx r0, r4, r0 */ // 0x807D3380
    if (==) goto 0x0x807d3398;
    if (==) goto 0x0x807d3398;
    /* li r5, 0 */ // 0x807D3394
    if (==) goto 0x0x807d340c;
    r0 = *(0x164 + r8); // lwz @ 0x807D33A0
    /* li r4, 0 */ // 0x807D33A4
    if (!=) goto 0x0x807d33c0;
    r0 = *(0x16d + r8); // lbz @ 0x807D33B0
    if (==) goto 0x0x807d33c0;
    /* li r4, 1 */ // 0x807D33BC
    if (==) goto 0x0x807d340c;
    r7 = *(0x30 + r8); // lwz @ 0x807D33C8
    /* clrlwi r4, r30, 0x10 */ // 0x807D33CC
    r0 = *(0x34 + r8); // lwz @ 0x807D33D0
    *(0xc + r1) = r0; // stw @ 0x807D33D8
    /* li r6, 0x3e8 */ // 0x807D33DC
    *(8 + r1) = r7; // stw @ 0x807D33E0
    r0 = *(0x38 + r8); // lwz @ 0x807D33E4
    *(0x10 + r1) = r0; // stw @ 0x807D33E8
    FUN_8091D584(r6); // bl 0x8091D584
    /* cntlzw r0, r3 */ // 0x807D33F0
    /* rlwinm. r0, r0, 0x1b, 5, 0x1f */ // 0x807D33F4
    if (==) goto 0x0x807d3414;
    r3 = r31;
    /* clrlwi r4, r30, 0x18 */ // 0x807D3400
    FUN_8090A01C(r3); // bl 0x8090A01C
    /* b 0x807d3414 */ // 0x807D3408
    /* clrlwi r4, r30, 0x10 */ // 0x807D340C
    FUN_8091E058(r3); // bl 0x8091E058
    r0 = *(0x24 + r1); // lwz @ 0x807D3414
    r31 = *(0x1c + r1); // lwz @ 0x807D3418
    r30 = *(0x18 + r1); // lwz @ 0x807D341C
    return;
}