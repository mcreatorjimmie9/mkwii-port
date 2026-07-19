/* Function at 0x805CE7B0, size=60 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_805CE7B0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x805CE7B8
    *(0x14 + r1) = r0; // stw @ 0x805CE7BC
    r0 = *(0 + r3); // lwz @ 0x805CE7C0
    if (!=) goto 0x0x805ce7e8;
    /* li r3, 0x61c */ // 0x805CE7CC
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x805ce7e0;
    FUN_805CE850(r3); // bl 0x805CE850
    /* lis r4, 0 */ // 0x805CE7E0
    *(0 + r4) = r3; // stw @ 0x805CE7E4
    r0 = *(0x14 + r1); // lwz @ 0x805CE7E8
}