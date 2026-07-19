/* Function at 0x8065C79C, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8065C79C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8065C7A8
    r31 = r3;
    FUN_8064A340(); // bl 0x8064A340
    if (==) goto 0x0x8065c7cc;
    r3 = r31;
    /* li r4, 0x40 */ // 0x8065C7C0
    /* li r5, -1 */ // 0x8065C7C4
    FUN_806A03F0(r3, r4, r5); // bl 0x806A03F0
    r0 = *(0x14 + r1); // lwz @ 0x8065C7CC
    r31 = *(0xc + r1); // lwz @ 0x8065C7D0
    return;
}