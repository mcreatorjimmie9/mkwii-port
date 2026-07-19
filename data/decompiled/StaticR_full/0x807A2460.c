/* Function at 0x807A2460, size=104 bytes */
/* Stack frame: 16 bytes */
/* Calls: 5 function(s) */

void FUN_807A2460(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* li r4, 3 */ // 0x807A2468
    *(0x14 + r1) = r0; // stw @ 0x807A246C
    r0 = *(0xc + r3); // lbz @ 0x807A2470
    *(8 + r3) = r4; // stw @ 0x807A2474
    if (==) goto 0x0x807a2490;
    /* lis r3, 0 */ // 0x807A2480
    /* li r4, 0x14 */ // 0x807A2484
    r3 = *(0 + r3); // lwz @ 0x807A2488
    FUN_807881A8(r3, r4); // bl 0x807881A8
    FUN_807A07E8(r3, r4); // bl 0x807A07E8
    if (!=) goto 0x0x807a24a0;
    FUN_805E3430(); // bl 0x805E3430
    /* lis r3, 0 */ // 0x807A24A0
    r3 = *(0 + r3); // lwz @ 0x807A24A4
    FUN_807AAC40(r3); // bl 0x807AAC40
    /* lis r3, 0 */ // 0x807A24AC
    r3 = *(0 + r3); // lwz @ 0x807A24B0
    FUN_8078AF4C(r3, r3); // bl 0x8078AF4C
    r0 = *(0x14 + r1); // lwz @ 0x807A24B8
    return;
}