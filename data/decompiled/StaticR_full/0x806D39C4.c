/* Function at 0x806D39C4, size=140 bytes */
/* Stack frame: 16 bytes */
/* Calls: 5 function(s) */

void FUN_806D39C4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x806D39CC
    *(0x14 + r1) = r0; // stw @ 0x806D39D0
    r3 = *(0 + r3); // lwz @ 0x806D39D4
    r4 = *(0 + r3); // lwz @ 0x806D39D8
    r0 = *(0 + r4); // lwz @ 0x806D39DC
    if (==) goto 0x0x806d39f4;
    if (==) goto 0x0x806d3a04;
    /* b 0x806d3a14 */ // 0x806D39F0
    /* li r4, 0x7a */ // 0x806D39F4
    /* li r5, 0 */ // 0x806D39F8
    FUN_80698C44(r4, r5); // bl 0x80698C44
    /* b 0x806d3a2c */ // 0x806D3A00
    /* li r4, 0x9e */ // 0x806D3A04
    /* li r5, 0 */ // 0x806D3A08
    FUN_80698C44(r5, r4, r5); // bl 0x80698C44
    /* b 0x806d3a2c */ // 0x806D3A10
    /* li r4, 0x8c */ // 0x806D3A14
    /* li r5, 0 */ // 0x806D3A18
    FUN_80698C44(r5, r4, r5); // bl 0x80698C44
    /* lis r3, 0 */ // 0x806D3A20
    r3 = *(0 + r3); // lwz @ 0x806D3A24
    FUN_8078819C(r4, r5, r3); // bl 0x8078819C
    /* lis r3, 0 */ // 0x806D3A2C
    /* li r4, 0 */ // 0x806D3A30
    r3 = *(0 + r3); // lwz @ 0x806D3A34
    /* li r5, 0xff */ // 0x806D3A38
    FUN_80698CD0(r3, r4, r5); // bl 0x80698CD0
    r0 = *(0x14 + r1); // lwz @ 0x806D3A40
    return;
}