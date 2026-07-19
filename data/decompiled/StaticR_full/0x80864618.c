/* Function at 0x80864618, size=180 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_80864618(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x80864620
    *(0xc + r1) = r31; // stw @ 0x80864628
    *(8 + r1) = r30; // stw @ 0x8086462C
    r31 = *(0 + r4); // lwz @ 0x80864630
    if (==) goto 0x0x808646b4;
    /* li r0, 0 */ // 0x8086463C
    *(0 + r4) = r0; // stw @ 0x80864640
    if (==) goto 0x0x808646b4;
    if (==) goto 0x0x808646ac;
    /* lis r3, 0 */ // 0x8086464C
    r3 = r3 + 0; // 0x80864650
    *(0 + r31) = r3; // stw @ 0x80864654
    r30 = *(0 + r4); // lwz @ 0x80864658
    if (==) goto 0x0x808646a0;
    *(0 + r4) = r0; // stw @ 0x80864664
    if (==) goto 0x0x808646a0;
    if (==) goto 0x0x80864698;
    *(0 + r30) = r3; // stw @ 0x80864670
    r3 = *(0 + r4); // lwz @ 0x80864674
    if (==) goto 0x0x8086468c;
    *(0 + r4) = r0; // stw @ 0x80864680
    /* li r4, 1 */ // 0x80864684
    FUN_808647D0(r4); // bl 0x808647D0
    r3 = r30;
    /* li r4, 0 */ // 0x80864690
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    r3 = r30;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r31;
    /* li r4, 0 */ // 0x808646A4
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r0 = *(0x14 + r1); // lwz @ 0x808646B4
    r31 = *(0xc + r1); // lwz @ 0x808646B8
    r30 = *(8 + r1); // lwz @ 0x808646BC
    return;
}