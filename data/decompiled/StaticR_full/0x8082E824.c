/* Function at 0x8082E824, size=160 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 5 function(s) */

int FUN_8082E824(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r6, 0 */ // 0x8082E82C
    r6 = r6 + 0; // 0x8082E834
    *(0x18 + r1) = r30; // stw @ 0x8082E83C
    *(0x14 + r1) = r29; // stw @ 0x8082E840
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x8082E848
    r28 = r3;
    r0 = *(4 + r3); // lwz @ 0x8082E850
    /* mulli r0, r0, 0x74 */ // 0x8082E854
    r4 = r6 + r0; // 0x8082E858
    r0 = *(0x5a + r4); // lbz @ 0x8082E85C
    if (==) goto 0x0x8082e8e4;
    if (!=) goto 0x0x8082e8e4;
    r0 = *(0x59 + r4); // lbz @ 0x8082E870
    if (==) goto 0x0x8082e8dc;
    r3 = r29;
    FUN_8061DFF8(r3); // bl 0x8061DFF8
    r31 = r3;
    r3 = r29;
    FUN_8061E584(r3, r3); // bl 0x8061E584
    r30 = r3;
    r3 = r29;
    FUN_8061DA88(r3, r3); // bl 0x8061DA88
    r4 = r3;
    r3 = r28;
    r5 = r30;
    r6 = r31 + 0x74; // 0x8082E8A8
    /* li r7, 1 */ // 0x8082E8AC
    FUN_808317CC(r4, r3, r5, r6, r7); // bl 0x808317CC
    r3 = r29;
    FUN_8061E2D8(r5, r6, r7, r3); // bl 0x8061E2D8
    r0 = r3;
    r3 = r28;
}