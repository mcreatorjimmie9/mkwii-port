/* Function at 0x806604C4, size=168 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_806604C4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r0, 0 */ // 0x806604D0
    /* li r31, 0 */ // 0x806604D8
    *(0x18 + r1) = r30; // stw @ 0x806604DC
    /* li r30, 0 */ // 0x806604E0
    *(0x14 + r1) = r29; // stw @ 0x806604E4
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x806604EC
    r28 = r3;
    *(0x260 + r3) = r0; // stw @ 0x806604F4
    r4 = *(0x264 + r28); // lwz @ 0x806604F8
    r3 = r4 + r31; // 0x806604FC
    r5 = *(0x54 + r3); // lwz @ 0x80660500
    if (==) goto 0x0x80660544;
    if (!=) goto 0x0x80660530;
    r5 = *(0x64 + r4); // lwz @ 0x80660514
    r7 = r4 + 0x74; // 0x80660518
    r3 = r28;
    r6 = r29;
    /* li r4, 4 */ // 0x80660524
    FUN_80660598(r7, r3, r6, r4); // bl 0x80660598
    /* b 0x80660544 */ // 0x8066052C
    r3 = r28;
    r4 = r30;
    r6 = r29;
    /* li r7, 0 */ // 0x8066053C
    FUN_80660598(r3, r4, r6, r7); // bl 0x80660598
    r30 = r30 + 1; // 0x80660544
    r31 = r31 + 4; // 0x80660548
    if (<) goto 0x0x806604f8;
    /* lis r6, 0 */ // 0x80660554
    r4 = *(0x260 + r28); // lwz @ 0x80660558
    r3 = r28;
    /* li r5, 0x10 */ // 0x80660560
    r6 = r6 + 0; // 0x80660564
    FUN_805E3430(r6, r3, r5, r6); // bl 0x805E3430
}