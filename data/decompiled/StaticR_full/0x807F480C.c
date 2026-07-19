/* Function at 0x807F480C, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_807F480C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807F4818
    r31 = r3;
    r0 = *(0xb8 + r3); // lbz @ 0x807F4820
    if (==) goto 0x0x807f4848;
    r0 = *(0xb4 + r3); // lwz @ 0x807F482C
    /* addic. r0, r0, -1 */ // 0x807F4830
    *(0xb4 + r3) = r0; // stw @ 0x807F4834
    if (!=) goto 0x0x807f487c;
    /* li r4, -1 */ // 0x807F483C
    FUN_807F4ABC(r4); // bl 0x807F4ABC
    /* b 0x807f487c */ // 0x807F4844
    /* lis r4, 0 */ // 0x807F4848
    r3 = r3 + 0x30; // 0x807F484C
    /* lfs f1, 0(r4) */ // 0x807F4850
    FUN_80812884(r4, r3); // bl 0x80812884
    r4 = r3;
    if (<) goto 0x0x807f487c;
    /* lis r5, 0 */ // 0x807F4864
    r0 = *(0 + r5); // lwz @ 0x807F4868
    if (==) goto 0x0x807f487c;
    r3 = r31;
    FUN_807F4ABC(r5, r3); // bl 0x807F4ABC
    r0 = *(0x14 + r1); // lwz @ 0x807F487C
    r31 = *(0xc + r1); // lwz @ 0x807F4880
    return;
}