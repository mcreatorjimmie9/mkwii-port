/* Function at 0x808F04B8, size=220 bytes */
/* Stack frame: 16 bytes */
/* Calls: 8 function(s) */

void FUN_808F04B8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x808F04C0
    r0 = *(0x240 + r4); // lwz @ 0x808F04C4
    if (!=) goto 0x0x808f04fc;
    r0 = *(4 + r3); // lwz @ 0x808F04D0
    if (!=) goto 0x0x808f04ec;
    r5 = r4;
    /* li r4, 0x67 */ // 0x808F04E0
    FUN_808B3ADC(r5, r4); // bl 0x808B3ADC
    /* b 0x808f0584 */ // 0x808F04E8
    /* lis r4, 0 */ // 0x808F04EC
    /* lfs f1, 0(r4) */ // 0x808F04F0
    FUN_808B3BEC(r4, r4); // bl 0x808B3BEC
    /* b 0x808f0584 */ // 0x808F04F8
    r0 = *(4 + r3); // lwz @ 0x808F04FC
    if (==) goto 0x0x808f052c;
    if (==) goto 0x0x808f053c;
    if (==) goto 0x0x808f054c;
    if (==) goto 0x0x808f055c;
    if (==) goto 0x0x808f056c;
    /* b 0x808f0584 */ // 0x808F0528
    r5 = r4;
    /* li r4, 0xcf */ // 0x808F0530
    FUN_808B38C8(r5, r4); // bl 0x808B38C8
    /* b 0x808f0584 */ // 0x808F0538
    r5 = r4;
    /* li r4, 0xd0 */ // 0x808F0540
    FUN_808B38C8(r4, r5, r4); // bl 0x808B38C8
    /* b 0x808f0584 */ // 0x808F0548
    r5 = r4;
    /* li r4, 0xd1 */ // 0x808F0550
    FUN_808B38C8(r4, r5, r4); // bl 0x808B38C8
    /* b 0x808f0584 */ // 0x808F0558
    r5 = r4;
    /* li r4, 0xd2 */ // 0x808F0560
    FUN_808B38C8(r4, r5, r4); // bl 0x808B38C8
    /* b 0x808f0584 */ // 0x808F0568
    r5 = r4;
    /* li r4, 0x47 */ // 0x808F0570
    FUN_808B3FE8(r4, r5, r4); // bl 0x808B3FE8
    /* lis r3, 0 */ // 0x808F0578
    r3 = *(0 + r3); // lwz @ 0x808F057C
    FUN_8078819C(r5, r4, r3); // bl 0x8078819C
    r0 = *(0x14 + r1); // lwz @ 0x808F0584
    return;
}