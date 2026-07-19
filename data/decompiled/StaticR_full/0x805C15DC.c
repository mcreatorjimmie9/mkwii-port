/* Function at 0x805C15DC, size=60 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_805C15DC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x805C15E4
    *(0x14 + r1) = r0; // stw @ 0x805C15E8
    r0 = *(0 + r3); // lwz @ 0x805C15EC
    if (!=) goto 0x0x805c1614;
    /* li r3, 0x4c */ // 0x805C15F8
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x805c160c;
    FUN_805C1CF8(r3); // bl 0x805C1CF8
    /* lis r4, 0 */ // 0x805C160C
    *(0 + r4) = r3; // stw @ 0x805C1610
    r0 = *(0x14 + r1); // lwz @ 0x805C1614
}