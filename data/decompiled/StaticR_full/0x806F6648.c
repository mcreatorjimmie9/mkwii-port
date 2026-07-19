/* Function at 0x806F6648, size=244 bytes */
/* Stack frame: 624 bytes */
/* Saved registers: r26 */
/* Calls: 8 function(s) */

int FUN_806F6648(int r3, int r4, int r5)
{
    /* Stack frame: -624(r1) */
    /* saved r26 */
    /* stmw r26, 0x258(r1) */ // 0x806F6654
    /* lis r26, 0 */ // 0x806F6658
    r27 = r3;
    r3 = *(0 + r26); // lwz @ 0x806F6660
    FUN_80703B7C(); // bl 0x80703B7C
    r3 = *(0 + r26); // lwz @ 0x806F6668
    FUN_80703B64(); // bl 0x80703B64
    if (==) goto 0x0x806f66d0;
    r3 = *(0 + r26); // lwz @ 0x806F6678
    FUN_80703B6C(); // bl 0x80703B6C
    if (==) goto 0x0x806f66a8;
    r3 = *(0 + r26); // lwz @ 0x806F6688
    FUN_80703B6C(); // bl 0x80703B6C
    if (==) goto 0x0x806f66a8;
    r3 = *(0 + r26); // lwz @ 0x806F6698
    FUN_80703B6C(); // bl 0x80703B6C
    if (!=) goto 0x0x806f66d0;
    r3 = r27;
    FUN_80701E68(r3); // bl 0x80701E68
    /* lis r3, 0 */ // 0x806F66B0
    r3 = *(0 + r3); // lwz @ 0x806F66B4
    FUN_80703B58(r3, r3); // bl 0x80703B58
    /* li r0, 0 */ // 0x806F66BC
    *(0x28 + r27) = r0; // stb @ 0x806F66C0
    *(0x7578 + r27) = r0; // stw @ 0x806F66C4
    *(0x10 + r27) = r0; // stw @ 0x806F66C8
    /* b 0x806f76c4 */ // 0x806F66CC
    /* lis r3, 0 */ // 0x806F66D0
    r3 = *(0 + r3); // lwz @ 0x806F66D4
    r0 = *(0x36 + r3); // lha @ 0x806F66D8
    if (<) goto 0x0x806f6700;
    /* lis r4, 1 */ // 0x806F66E4
    /* clrlwi r5, r0, 0x18 */ // 0x806F66E8
    r0 = r4 + -0x6c10; // 0x806F66EC
    r0 = r0 * r5; // 0x806F66F0
    r4 = r3 + r0; // 0x806F66F4
    r30 = r4 + 0x38; // 0x806F66F8
    /* b 0x806f6704 */ // 0x806F66FC
    /* li r30, 0 */ // 0x806F6700
    r0 = *(0x4200 + r27); // lwz @ 0x806F6704
    if (>) goto 0x0x806f76c4;
    /* lis r4, 0 */ // 0x806F6710
    /* slwi r0, r0, 2 */ // 0x806F6714
    r4 = r4 + 0; // 0x806F6718
    /* lwzx r4, r4, r0 */ // 0x806F671C
    /* mtctr r4 */ // 0x806F6720
    /* bctr  */ // 0x806F6724
    /* lis r26, 0 */ // 0x806F6728
    r3 = *(0 + r26); // lwz @ 0x806F672C
    FUN_80703B64(); // bl 0x80703B64
    if (==) goto 0x0x806f76c4;
}