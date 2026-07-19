/* Function at 0x8063144C, size=60 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_8063144C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x80631454
    *(0x14 + r1) = r0; // stw @ 0x80631458
    r0 = *(0 + r3); // lwz @ 0x8063145C
    if (!=) goto 0x0x80631484;
    /* li r3, 0x38 */ // 0x80631468
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x8063147c;
    FUN_806314D0(r3); // bl 0x806314D0
    /* lis r4, 0 */ // 0x8063147C
    *(0 + r4) = r3; // stw @ 0x80631480
    r0 = *(0x14 + r1); // lwz @ 0x80631484
}