/* Function at 0x806EA6A0, size=52 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_806EA6A0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x806EA6A8
    *(0x14 + r1) = r0; // stw @ 0x806EA6AC
    r0 = *(0 + r3); // lwz @ 0x806EA6B0
    if (!=) goto 0x0x806ea754;
    /* li r3, 0x80 */ // 0x806EA6BC
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x806ea74c;
    /* li r4, 0 */ // 0x806EA6CC
    *(0 + r3) = r4; // stb @ 0x806EA6D0
}