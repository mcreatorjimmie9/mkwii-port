/* Function at 0x80827378, size=224 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_80827378(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x80827380
    /* mulli r0, r3, 0x74 */ // 0x80827388
    r4 = r4 + 0; // 0x8082738C
    *(0x1c + r1) = r31; // stw @ 0x80827390
    /* lis r31, 0 */ // 0x80827394
    r4 = r4 + r0; // 0x80827398
    *(0x18 + r1) = r30; // stw @ 0x8082739C
    *(0x14 + r1) = r29; // stw @ 0x808273A0
    *(0x10 + r1) = r28; // stw @ 0x808273A4
    r28 = r3;
    r6 = *(0x28 + r4); // lwz @ 0x808273AC
    /* lis r4, 0 */ // 0x808273B0
    r0 = *(0 + r4); // lwz @ 0x808273B4
    /* lis r4, 0 */ // 0x808273B8
    r5 = *(0 + r31); // lwz @ 0x808273BC
    /* clrlwi r30, r6, 0x18 */ // 0x808273C0
    *(0 + r5) = r0; // sth @ 0x808273C4
    r0 = r30 + 2; // 0x808273C8
    /* clrlwi r30, r0, 0x18 */ // 0x808273CC
    r29 = *(0 + r4); // lwz @ 0x808273D0
    r3 = r29;
    FUN_806E4428(r3); // bl 0x806E4428
    if (<) goto 0x0x80827410;
    r3 = r29;
    FUN_806E4370(r3, r3); // bl 0x806E4370
    if (==) goto 0x0x80827410;
    r6 = *(0 + r31); // lwz @ 0x808273F4
    r3 = r29;
    r4 = r28;
    r7 = r30;
    /* li r5, 2 */ // 0x80827404
    FUN_806E4364(r3, r4, r7, r5); // bl 0x806E4364
    /* b 0x80827430 */ // 0x8082740C
    /* lis r3, 0 */ // 0x80827410
    /* lis r5, 0 */ // 0x80827414
    r6 = *(0 + r5); // lwz @ 0x80827418
    r4 = r28;
    r3 = *(0 + r3); // lwz @ 0x80827420
    r7 = r30;
    /* li r5, 2 */ // 0x80827428
    FUN_80827080(r4, r7, r5); // bl 0x80827080
    r31 = *(0x1c + r1); // lwz @ 0x80827430
    /* lis r3, 0 */ // 0x80827434
    r30 = *(0x18 + r1); // lwz @ 0x80827438
    r29 = *(0x14 + r1); // lwz @ 0x8082743C
    r28 = *(0x10 + r1); // lwz @ 0x80827440
    r0 = *(0x24 + r1); // lwz @ 0x80827444
    r3 = *(0 + r3); // lwz @ 0x80827448
    return;
}