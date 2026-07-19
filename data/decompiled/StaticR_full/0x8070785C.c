/* Function at 0x8070785C, size=136 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_8070785C(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x80707864
    *(0x34 + r1) = r0; // stw @ 0x80707868
    /* li r0, 0 */ // 0x8070786C
    *(0x2c + r1) = r31; // stw @ 0x80707870
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x80707878
    *(8 + r1) = r0; // stb @ 0x80707880
    *(0xc + r1) = r0; // stw @ 0x80707884
    FUN_806F9214(r4); // bl 0x806F9214
    if (==) goto 0x0x807078ac;
    r0 = *(0x14 + r1); // lwz @ 0x80707894
    if (!=) goto 0x0x807078ac;
    r3 = r31;
    FUN_8070792C(r3); // bl 0x8070792C
    /* b 0x807078d0 */ // 0x807078A8
    /* lis r31, 0 */ // 0x807078AC
    /* li r4, 0x7a */ // 0x807078B0
    r3 = *(0 + r31); // lwz @ 0x807078B4
    /* li r5, 1 */ // 0x807078B8
    FUN_80698C44(r4, r5); // bl 0x80698C44
    r3 = *(0 + r31); // lwz @ 0x807078C0
    /* li r4, 0 */ // 0x807078C4
    /* li r5, 0xff */ // 0x807078C8
    FUN_80698CD0(r5, r4, r5); // bl 0x80698CD0
    r0 = *(0x34 + r1); // lwz @ 0x807078D0
    r31 = *(0x2c + r1); // lwz @ 0x807078D4
    return;
}