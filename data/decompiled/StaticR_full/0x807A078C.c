/* Function at 0x807A078C, size=92 bytes */
/* Stack frame: 16 bytes */
/* Calls: 4 function(s) */

void FUN_807A078C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* li r4, 3 */ // 0x807A0794
    *(0x14 + r1) = r0; // stw @ 0x807A0798
    r0 = *(0xc + r3); // lbz @ 0x807A079C
    *(8 + r3) = r4; // stw @ 0x807A07A0
    if (==) goto 0x0x807a07bc;
    /* lis r3, 0 */ // 0x807A07AC
    /* li r4, 0x14 */ // 0x807A07B0
    r3 = *(0 + r3); // lwz @ 0x807A07B4
    FUN_807881A8(r3, r4); // bl 0x807881A8
    FUN_807A07E8(r3, r4); // bl 0x807A07E8
    if (!=) goto 0x0x807a07cc;
    FUN_805E3430(); // bl 0x805E3430
    /* lis r3, 0 */ // 0x807A07CC
    r3 = *(0 + r3); // lwz @ 0x807A07D0
    FUN_807AAC40(r3); // bl 0x807AAC40
    r0 = *(0x14 + r1); // lwz @ 0x807A07D8
    return;
}