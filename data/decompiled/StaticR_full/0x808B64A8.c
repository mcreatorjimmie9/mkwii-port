/* Function at 0x808B64A8, size=364 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_808B64A8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r5, 0 */ // 0x808B64B0
    r30 = r6;
    *(0x14 + r1) = r29; // stw @ 0x808B64C4
    r29 = r3;
    *(0x10 + r1) = r28; // stw @ 0x808B64CC
    r5 = *(0 + r5); // lwz @ 0x808B64D0
    r31 = *(0x20c + r4); // lwz @ 0x808B64D4
    r0 = *(0x36 + r5); // lha @ 0x808B64D8
    if (<) goto 0x0x808b6500;
    /* lis r3, 1 */ // 0x808B64E4
    /* clrlwi r4, r0, 0x18 */ // 0x808B64E8
    r0 = r3 + -0x6c10; // 0x808B64EC
    r0 = r0 * r4; // 0x808B64F0
    r3 = r5 + r0; // 0x808B64F4
    r28 = r3 + 0x38; // 0x808B64F8
    /* b 0x808b6504 */ // 0x808B64FC
    /* li r28, 0 */ // 0x808B6500
    FUN_808CFE7C(); // bl 0x808CFE7C
    if (==) goto 0x0x808b652c;
    if (==) goto 0x0x808b6540;
    if (==) goto 0x0x808b6554;
    if (==) goto 0x0x808b6568;
    /* b 0x808b6578 */ // 0x808B6528
    /* addis r4, r28, 1 */ // 0x808B652C
    /* slwi r0, r3, 2 */ // 0x808B6530
    r3 = r4 + r0; // 0x808B6534
    *(-0x6ec8 + r3) = r30; // stw @ 0x808B6538
    /* b 0x808b6578 */ // 0x808B653C
    /* addis r4, r28, 1 */ // 0x808B6540
    /* slwi r0, r3, 2 */ // 0x808B6544
    r3 = r4 + r0; // 0x808B6548
    *(-0x6eb8 + r3) = r30; // stw @ 0x808B654C
    /* b 0x808b6578 */ // 0x808B6550
    /* addis r4, r28, 1 */ // 0x808B6554
    /* slwi r0, r3, 2 */ // 0x808B6558
    r3 = r4 + r0; // 0x808B655C
    *(-0x6ea8 + r3) = r30; // stw @ 0x808B6560
    /* b 0x808b6578 */ // 0x808B6564
    /* addis r4, r28, 1 */ // 0x808B6568
    /* slwi r0, r3, 2 */ // 0x808B656C
    r3 = r4 + r0; // 0x808B6570
    *(-0x6e98 + r3) = r30; // stw @ 0x808B6574
    if (<) goto 0x0x808b65b4;
    /* li r28, 0 */ // 0x808B6580
    /* li r30, 1 */ // 0x808B6584
    r3 = *(0x6bc + r29); // lwz @ 0x808B6588
    r0 = r30 << r28; // slw
    /* and. r0, r3, r0 */ // 0x808B6590
    if (==) goto 0x0x808b65a4;
    r4 = r28;
    r3 = r29 + 0x1124; // 0x808B659C
    FUN_806A1D2C(r4, r3); // bl 0x806A1D2C
    r28 = r28 + 1; // 0x808B65A4
    if (<) goto 0x0x808b6588;
    /* b 0x808b65f4 */ // 0x808B65B0
    r0 = r31 + 1; // 0x808B65B4
    /* li r31, 0 */ // 0x808B65B8
    /* mulli r0, r0, 0x298 */ // 0x808B65BC
    /* li r30, 1 */ // 0x808B65C0
    r3 = r29 + r0; // 0x808B65C4
    r28 = r3 + 0x6c4; // 0x808B65C8
    r3 = *(0x6bc + r29); // lwz @ 0x808B65CC
    r0 = r30 << r31; // slw
    /* and. r0, r3, r0 */ // 0x808B65D4
    if (==) goto 0x0x808b65e8;
    r3 = r28;
    r4 = r31;
    FUN_806755BC(r3, r4); // bl 0x806755BC
    r31 = r31 + 1; // 0x808B65E8
    if (<) goto 0x0x808b65cc;
    r0 = *(0x24 + r1); // lwz @ 0x808B65F4
    r31 = *(0x1c + r1); // lwz @ 0x808B65F8
    r30 = *(0x18 + r1); // lwz @ 0x808B65FC
    r29 = *(0x14 + r1); // lwz @ 0x808B6600
    r28 = *(0x10 + r1); // lwz @ 0x808B6604
    return;
}