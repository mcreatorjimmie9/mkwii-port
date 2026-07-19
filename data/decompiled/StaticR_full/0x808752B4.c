/* Function at 0x808752B4, size=124 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_808752B4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x808752BC
    *(0x14 + r1) = r0; // stw @ 0x808752C0
    *(0xc + r1) = r31; // stw @ 0x808752C4
    r31 = r3;
    r4 = *(0 + r4); // lwz @ 0x808752CC
    if (==) goto 0x0x808752fc;
    r0 = *(0x404 + r4); // lwz @ 0x808752D8
    if (==) goto 0x0x808752fc;
    /* lis r4, 0 */ // 0x808752E4
    /* li r5, 1 */ // 0x808752E8
    r4 = r4 + 0; // 0x808752EC
    r4 = r4 + 0x56; // 0x808752F0
    FUN_806A11CC(r4, r5, r4, r4); // bl 0x806A11CC
    /* b 0x80875314 */ // 0x808752F8
    /* lis r4, 0 */ // 0x808752FC
    r3 = r31;
    r4 = r4 + 0; // 0x80875304
    /* li r5, 0 */ // 0x80875308
    r4 = r4 + 0x5b; // 0x8087530C
    FUN_806A11CC(r4, r3, r4, r5, r4); // bl 0x806A11CC
    r3 = r31;
    FUN_80876EDC(r4, r5, r4, r3); // bl 0x80876EDC
    r0 = *(0x14 + r1); // lwz @ 0x8087531C
    r31 = *(0xc + r1); // lwz @ 0x80875320
    return;
}