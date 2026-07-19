/* Function at 0x808F8370, size=216 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_808F8370(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x14 + r1) = r29; // stw @ 0x808F8388
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x808F8390
    r28 = r3;
    if (<=) goto 0x0x808f83a4;
    /* li r3, 0 */ // 0x808F839C
    /* b 0x808f8428 */ // 0x808F83A0
    /* lis r3, 0 */ // 0x808F83A4
    /* slwi r0, r4, 2 */ // 0x808F83A8
    r3 = r3 + 0; // 0x808F83AC
    /* lwzx r31, r3, r0 */ // 0x808F83B0
    if (!=) goto 0x0x808f83c4;
    /* li r3, 0 */ // 0x808F83BC
    /* b 0x808f8428 */ // 0x808F83C0
    /* lis r3, 0 */ // 0x808F83C4
    r5 = r31;
    r3 = *(0 + r3); // lwz @ 0x808F83CC
    r4 = r28 + 0x2430; // 0x808F83D0
    r12 = *(0 + r3); // lwz @ 0x808F83D4
    r12 = *(0xb0 + r12); // lwz @ 0x808F83D8
    /* mtctr r12 */ // 0x808F83DC
    /* bctrl  */ // 0x808F83E0
    r30 = r3;
    if (==) goto 0x0x808f8424;
    r3 = *(0x2430 + r28); // lwz @ 0x808F83F0
    if (==) goto 0x0x808f840c;
    /* lis r4, 0 */ // 0x808F83FC
    /* lfs f1, 0(r4) */ // 0x808F8400
    /* li r4, 0 */ // 0x808F8404
    FUN_805E3430(r4, r4); // bl 0x805E3430
    /* mulli r0, r29, 0xc0 */ // 0x808F840C
    r4 = r31;
    /* li r5, 1 */ // 0x808F8414
    r3 = r28 + r0; // 0x808F8418
    r3 = r3 + 0x30; // 0x808F841C
    FUN_808F9218(r4, r5, r3); // bl 0x808F9218
    r3 = r30;
    r0 = *(0x24 + r1); // lwz @ 0x808F8428
    r31 = *(0x1c + r1); // lwz @ 0x808F842C
    r30 = *(0x18 + r1); // lwz @ 0x808F8430
    r29 = *(0x14 + r1); // lwz @ 0x808F8434
    r28 = *(0x10 + r1); // lwz @ 0x808F8438
    return;
}