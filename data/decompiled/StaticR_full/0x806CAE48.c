/* Function at 0x806CAE48, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806CAE48(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x806CAE50
    *(0x14 + r1) = r0; // stw @ 0x806CAE54
    *(0xc + r1) = r31; // stw @ 0x806CAE58
    r31 = r3;
    r4 = *(0 + r4); // lwz @ 0x806CAE60
    if (==) goto 0x0x806cae98;
    r5 = *(0x14 + r4); // lwz @ 0x806CAE6C
    if (==) goto 0x0x806cae98;
    r4 = *(0x174 + r3); // lbz @ 0x806CAE78
    /* mulli r0, r4, 0xc */ // 0x806CAE7C
    r3 = r5 + r0; // 0x806CAE80
    r3 = *(0x18 + r3); // lwz @ 0x806CAE84
    if (==) goto 0x0x806cae98;
    /* li r5, 2 */ // 0x806CAE90
    FUN_808E08F0(r5); // bl 0x808E08F0
    r3 = r31;
    FUN_806CB2CC(r5, r3); // bl 0x806CB2CC
    r0 = *(0x14 + r1); // lwz @ 0x806CAEA0
    r31 = *(0xc + r1); // lwz @ 0x806CAEA4
    return;
}