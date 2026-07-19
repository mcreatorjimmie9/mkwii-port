/* Function at 0x808CC544, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_808CC544(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808CC550
    r31 = r3;
    r0 = *(0x10 + r3); // lwz @ 0x808CC558
    if (!=) goto 0x0x808cc59c;
    r0 = *(4 + r3); // lwz @ 0x808CC564
    if (<) goto 0x0x808cc578;
    if (<=) goto 0x0x808cc580;
    if (!=) goto 0x0x808cc59c;
    /* lis r3, 0 */ // 0x808CC580
    r3 = *(0 + r3); // lwz @ 0x808CC584
    FUN_807A2614(r3); // bl 0x807A2614
    r3 = r31;
    /* li r4, 0xd4 */ // 0x808CC590
    /* li r5, -1 */ // 0x808CC594
    FUN_806724B8(r3, r4, r5); // bl 0x806724B8
    r0 = *(0x14 + r1); // lwz @ 0x808CC59C
    r31 = *(0xc + r1); // lwz @ 0x808CC5A0
    return;
}