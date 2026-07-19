/* Function at 0x807DB7DC, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807DB7DC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 0 */ // 0x807DB7E4
    *(0xc + r1) = r31; // stw @ 0x807DB7EC
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807DB7F4
    r30 = r3;
    r0 = *(0x34 + r3); // lwz @ 0x807DB7FC
    if (==) goto 0x0x807db820;
    r3 = r0;
    r12 = *(0 + r3); // lwz @ 0x807DB80C
    r12 = *(0x20 + r12); // lwz @ 0x807DB810
    /* mtctr r12 */ // 0x807DB814
    /* bctrl  */ // 0x807DB818
    r5 = r3;
    r3 = r30;
    r4 = r31;
    FUN_807DB8F8(r5, r3, r4); // bl 0x807DB8F8
    r0 = *(0x14 + r1); // lwz @ 0x807DB82C
    r31 = *(0xc + r1); // lwz @ 0x807DB830
    r30 = *(8 + r1); // lwz @ 0x807DB834
    return;
}