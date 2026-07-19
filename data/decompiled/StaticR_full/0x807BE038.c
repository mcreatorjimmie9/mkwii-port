/* Function at 0x807BE038, size=204 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 6 function(s) */

int FUN_807BE038(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807BE044
    r31 = r3;
    r4 = *(0x198 + r3); // lwz @ 0x807BE04C
    r3 = *(0 + r4); // lwz @ 0x807BE050
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x807BE058
    /* clrlwi r0, r3, 0x18 */ // 0x807BE05C
    r3 = *(0 + r4); // lwz @ 0x807BE060
    /* mulli r0, r0, 0x248 */ // 0x807BE064
    r3 = *(0x14 + r3); // lwz @ 0x807BE068
    r3 = r3 + r0; // 0x807BE06C
    r0 = *(0x8c + r3); // lwz @ 0x807BE070
    if (!=) goto 0x0x807be08c;
    r3 = r31;
    r4 = r31 + 0x38; // 0x807BE080
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    /* b 0x807be0f0 */ // 0x807BE088
    r0 = *(0x1a0 + r31); // lbz @ 0x807BE08C
    if (==) goto 0x0x807be0f0;
    r0 = *(0x1a4 + r31); // lwz @ 0x807BE098
    if (==) goto 0x0x807be0b8;
    if (==) goto 0x0x807be0d4;
    if (==) goto 0x0x807be0e4;
    /* b 0x807be0f0 */ // 0x807BE0B4
    r3 = *(0x198 + r31); // lwz @ 0x807BE0B8
    /* li r4, 4 */ // 0x807BE0BC
    FUN_807BB884(r4); // bl 0x807BB884
    r3 = r31;
    r4 = r31 + 0x38; // 0x807BE0C8
    FUN_807CF1B4(r4, r3, r4); // bl 0x807CF1B4
    /* b 0x807be0f0 */ // 0x807BE0D0
    r3 = r31;
    r4 = r31 + 0xe8; // 0x807BE0D8
    FUN_807CF1B4(r4, r3, r4); // bl 0x807CF1B4
    /* b 0x807be0f0 */ // 0x807BE0E0
    r3 = r31;
    r4 = r31 + 0x114; // 0x807BE0E8
    FUN_807CF1B4(r4, r3, r4); // bl 0x807CF1B4
    r0 = *(0x14 + r1); // lwz @ 0x807BE0F0
    r31 = *(0xc + r1); // lwz @ 0x807BE0F4
    return;
}