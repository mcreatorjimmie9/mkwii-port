/* Function at 0x806603A0, size=160 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_806603A0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r0, 0 */ // 0x806603AC
    /* li r31, 0 */ // 0x806603B4
    *(0x18 + r1) = r30; // stw @ 0x806603B8
    /* li r30, 0 */ // 0x806603BC
    *(0x14 + r1) = r29; // stw @ 0x806603C0
    r29 = r3;
    *(0x260 + r3) = r0; // stw @ 0x806603C8
    r4 = *(0x264 + r29); // lwz @ 0x806603CC
    r3 = r4 + r31; // 0x806603D0
    r5 = *(0x54 + r3); // lwz @ 0x806603D4
    if (==) goto 0x0x80660418;
    if (!=) goto 0x0x80660404;
    r5 = *(0x64 + r4); // lwz @ 0x806603E8
    r7 = r4 + 0x74; // 0x806603EC
    r3 = r29;
    /* li r4, 4 */ // 0x806603F4
    /* li r6, -1 */ // 0x806603F8
    FUN_80660598(r7, r3, r4, r6); // bl 0x80660598
    /* b 0x80660418 */ // 0x80660400
    r3 = r29;
    r4 = r30;
    /* li r6, -1 */ // 0x8066040C
    /* li r7, 0 */ // 0x80660410
    FUN_80660598(r3, r4, r6, r7); // bl 0x80660598
    r30 = r30 + 1; // 0x80660418
    r31 = r31 + 4; // 0x8066041C
    if (<) goto 0x0x806603cc;
    /* lis r6, 0 */ // 0x80660428
    r4 = *(0x260 + r29); // lwz @ 0x8066042C
    r3 = r29;
    /* li r5, 0x10 */ // 0x80660434
    r6 = r6 + 0; // 0x80660438
    FUN_805E3430(r6, r3, r5, r6); // bl 0x805E3430
}