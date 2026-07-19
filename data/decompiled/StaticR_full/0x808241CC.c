/* Function at 0x808241CC, size=60 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_808241CC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x808241D4
    *(0x14 + r1) = r0; // stw @ 0x808241D8
    r0 = *(0 + r3); // lwz @ 0x808241DC
    if (!=) goto 0x0x80824204;
    /* li r3, 0x430 */ // 0x808241E8
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x808241fc;
    FUN_8082436C(r3); // bl 0x8082436C
    /* lis r4, 0 */ // 0x808241FC
    *(0 + r4) = r3; // stw @ 0x80824200
    r0 = *(0x14 + r1); // lwz @ 0x80824204
}