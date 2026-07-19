/* Function at 0x806827E0, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 6 function(s) */

int FUN_806827E0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806827EC
    r31 = r3;
    r3 = r3 + 0x1c34; // 0x806827F4
    FUN_80654118(r3); // bl 0x80654118
    if (==) goto 0x0x80682824;
    /* lis r4, 0 */ // 0x80682804
    /* li r0, 1 */ // 0x80682808
    /* lfs f1, 0(r4) */ // 0x8068280C
    r3 = r31;
    *(0x2530 + r31) = r0; // stw @ 0x80682814
    /* li r4, 1 */ // 0x80682818
    FUN_80671C48(r3, r4); // bl 0x80671C48
    /* b 0x80682854 */ // 0x80682820
    r3 = r31 + 0x1c34; // 0x80682824
    FUN_80654340(r4, r3); // bl 0x80654340
    r3 = r31 + 0x19e0; // 0x8068282C
    FUN_8064A340(r3, r3); // bl 0x8064A340
    if (==) goto 0x0x80682848;
    r3 = r31 + 0x298; // 0x8068283C
    /* li r4, 0 */ // 0x80682840
    FUN_80649F40(r3, r4); // bl 0x80649F40
    r3 = r31 + 0x19e0; // 0x80682848
    /* li r4, 0 */ // 0x8068284C
    FUN_80649FD0(r3, r4, r3, r4); // bl 0x80649FD0
    r0 = *(0x14 + r1); // lwz @ 0x80682854
    r31 = *(0xc + r1); // lwz @ 0x80682858
    return;
}