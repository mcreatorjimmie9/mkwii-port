/* Function at 0x808383AC, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_808383AC(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x808383B4
    *(0x14 + r1) = r0; // stw @ 0x808383B8
    *(0xc + r1) = r31; // stw @ 0x808383BC
    r31 = r3;
    r0 = *(0 + r4); // lbz @ 0x808383C4
    if (==) goto 0x0x808383f8;
    /* lis r4, 0 */ // 0x808383D0
    /* li r6, 0 */ // 0x808383D4
    r4 = r4 + 0; // 0x808383D8
    /* li r7, 0 */ // 0x808383DC
    r5 = r4 + 0xc; // 0x808383E0
    /* li r8, 0 */ // 0x808383E4
    FUN_8082AFF0(r6, r4, r7, r5, r8); // bl 0x8082AFF0
    r3 = r31;
    FUN_8082B414(r7, r5, r8, r3); // bl 0x8082B414
    /* b 0x80838418 */ // 0x808383F4
    /* lis r5, 0 */ // 0x808383F8
    /* li r6, 0 */ // 0x808383FC
    r5 = r5 + 0; // 0x80838400
    /* li r7, 0 */ // 0x80838404
    r4 = r5 + 0x14; // 0x80838408
    /* li r8, 0 */ // 0x8083840C
    r5 = r5 + 0x20; // 0x80838410
    FUN_8082AFF0(r5, r7, r4, r8, r5); // bl 0x8082AFF0
    r0 = *(0x14 + r1); // lwz @ 0x80838418
    r31 = *(0xc + r1); // lwz @ 0x8083841C
    return;
}