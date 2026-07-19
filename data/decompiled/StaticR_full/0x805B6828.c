/* Function at 0x805B6828, size=60 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_805B6828(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x805B6830
    *(0x14 + r1) = r0; // stw @ 0x805B6834
    r0 = *(0 + r3); // lwz @ 0x805B6838
    if (!=) goto 0x0x805b6860;
    /* li r3, 0x308 */ // 0x805B6844
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x805b6858;
    FUN_805B68AC(r3); // bl 0x805B68AC
    /* lis r4, 0 */ // 0x805B6858
    *(0 + r4) = r3; // stw @ 0x805B685C
    r0 = *(0x14 + r1); // lwz @ 0x805B6860
}