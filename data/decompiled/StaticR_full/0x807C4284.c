/* Function at 0x807C4284, size=260 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_807C4284(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r4, 0 */ // 0x807C428C
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x807C429C
    *(0x14 + r1) = r29; // stw @ 0x807C42A0
    *(0x10 + r1) = r28; // stw @ 0x807C42A4
    r5 = *(0x28 + r3); // lwz @ 0x807C42A8
    r5 = r5 + 1; // 0x807C42AC
    *(0x28 + r3) = r5; // stw @ 0x807C42B0
    r0 = *(0 + r4); // lha @ 0x807C42B4
    if (<=) goto 0x0x807c4368;
    r28 = *(4 + r3); // lwz @ 0x807C42C0
    if (<=) goto 0x0x807c4360;
    /* lis r30, 0 */ // 0x807C42CC
    r4 = r28;
    r3 = *(0 + r30); // lwz @ 0x807C42D4
    FUN_807C03BC(r4); // bl 0x807C03BC
    r0 = r3 / r28; // 0x807C42DC
    r29 = *(4 + r31); // lwz @ 0x807C42E0
    r0 = r0 * r28; // 0x807C42E4
    /* subf r0, r0, r3 */ // 0x807C42E8
    /* slwi r0, r0, 2 */ // 0x807C42EC
    r3 = r31 + r0; // 0x807C42F0
    r28 = *(0xc + r3); // lwz @ 0x807C42F4
    if (==) goto 0x0x807c4324;
    r3 = *(0 + r30); // lwz @ 0x807C4300
    r4 = r29 + -1; // 0x807C4304
    FUN_807C03BC(r4); // bl 0x807C03BC
    r4 = *(0x10 + r28); // lwz @ 0x807C430C
    r4 = r4 + 1; // 0x807C4310
    r0 = r4 / r29; // 0x807C4314
    r0 = r0 * r29; // 0x807C4318
    /* subf r4, r0, r4 */ // 0x807C431C
    /* b 0x807c4334 */ // 0x807C4320
    r3 = *(0 + r30); // lwz @ 0x807C4324
    r4 = r29;
    FUN_807C03BC(r4); // bl 0x807C03BC
    /* li r4, 0 */ // 0x807C4330
    r3 = r4 + r3; // 0x807C4334
    r4 = *(0x18 + r28); // lwz @ 0x807C4338
    r0 = r3 / r29; // 0x807C433C
    r0 = r0 * r29; // 0x807C4340
    /* subf r3, r0, r3 */ // 0x807C4344
    /* slwi r0, r3, 2 */ // 0x807C4348
    r3 = r31 + r0; // 0x807C434C
    r3 = *(0xc + r3); // lwz @ 0x807C4350
    r0 = *(0x18 + r3); // lwz @ 0x807C4354
    *(0x18 + r28) = r0; // stw @ 0x807C4358
    *(0x18 + r3) = r4; // stw @ 0x807C435C
    /* li r0, 0 */ // 0x807C4360
    *(0x28 + r31) = r0; // stw @ 0x807C4364
    r0 = *(0x24 + r1); // lwz @ 0x807C4368
    r31 = *(0x1c + r1); // lwz @ 0x807C436C
    r30 = *(0x18 + r1); // lwz @ 0x807C4370
    r29 = *(0x14 + r1); // lwz @ 0x807C4374
    r28 = *(0x10 + r1); // lwz @ 0x807C4378
    return;
}