/* Function at 0x805E1B90, size=120 bytes */
/* Stack frame: 16 bytes */
/* Calls: 7 function(s) */

void FUN_805E1B90(int r3)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x805E1B98
    *(0x14 + r1) = r0; // stw @ 0x805E1B9C
    r3 = *(0 + r3); // lwz @ 0x805E1BA0
    FUN_806F5BA0(r3); // bl 0x806F5BA0
    /* lis r3, 0 */ // 0x805E1BA8
    r3 = *(0 + r3); // lwz @ 0x805E1BAC
    FUN_80698A44(r3); // bl 0x80698A44
    /* lis r3, 0 */ // 0x805E1BB4
    r3 = *(0 + r3); // lwz @ 0x805E1BB8
    FUN_807DEEA4(r3, r3); // bl 0x807DEEA4
    /* lis r3, 0 */ // 0x805E1BC0
    r3 = *(0 + r3); // lwz @ 0x805E1BC4
    if (==) goto 0x0x805e1bd4;
    FUN_806F0D38(r3); // bl 0x806F0D38
    /* lis r3, 0 */ // 0x805E1BD4
    r3 = *(0 + r3); // lwz @ 0x805E1BD8
    FUN_8070C7A0(r3); // bl 0x8070C7A0
    /* lis r3, 0 */ // 0x805E1BE0
    r3 = *(0 + r3); // lwz @ 0x805E1BE4
    FUN_80647530(r3, r3); // bl 0x80647530
    /* lis r3, 0 */ // 0x805E1BEC
    r3 = *(0 + r3); // lwz @ 0x805E1BF0
    FUN_80800958(r3, r3); // bl 0x80800958
    r0 = *(0x14 + r1); // lwz @ 0x805E1BF8
    return;
}